#include<iostream>
using namespace std;

void sort_array(int arr[] , int n){
    if(n==0 || n==1){
        return;
    }

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    sort_array(arr , n-1);
}

int main()
{
    int arr[6]= {1,9,6,4,5,3};
    sort_array(arr,6 );
    for(int i : arr){
        cout<<arr[i]<<endl;
    }
           
 return 0;}