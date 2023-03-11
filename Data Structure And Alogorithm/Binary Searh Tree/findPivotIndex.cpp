#include<iostream>
using namespace std;
int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
         mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearchTree(int arr[], int s,int e, int target){
    int start =s;
    int end = e -1;
    int mid = (start + end)/2;
    while(start <= end){
        if(arr[mid]==target){
            return mid;
        }
        else if( arr[mid] < target){
            start = mid +1;
        }
        else {
            end = mid -1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int findPos(int arr[], int n, int k){
    int pivot = getPivot(arr,n);
    if(k >= arr[pivot] && k<= arr[n-1] )  {
        return binarySearchTree(arr,pivot,n-1,k);
    }
    else {
        return binarySearchTree(arr, 0 , pivot -1 , k);
    }
}


int main()
{

    int arr[5]={7,8,8,1,2};
   cout<< findPos(arr,5,8);
           
 return 0;}