#include <iostream>
using namespace std;

int firstOccurancre(int arr[] , int size , int target){
    int start =0,ans=-1;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(target == arr[mid]){
          ans = mid;
          end = mid -1;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;

}
int secondOccurancre(int arr[] , int size , int target){
    int start =0,ans=-1;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(target == arr[mid]){
          ans = mid;
          start = mid +1;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;

}


int main()
{
    int even[5]={1,2,3,3,3};
    cout<<"The first occurence of 3 is at Index :"<< firstOccurancre(even, 5, 3)<<endl;
    cout<<"The second occurence of 3 is at Index :"<< secondOccurancre(even, 5, 3);
    return 0;
}