#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binarySearchTree(int arr[], int size , int target){
    int start =0;
    int end = size -1;
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

int main()
{

   int size ;
   cout<<"Enter the size of Array :";
   cin>>size;
   int arr[size],tar;
   for(int i=0;i<size;i++){
    cout<<"Enter the " << i << "th element :";
    cin>>arr[i];
   }
   cout<<"Enter the  target elel";
   cin>>tar;
   int index =binarySearchTree(arr, size , tar);
   cout<<"The index of the element"<<tar<<" is:"<<index;
    return 0;
}