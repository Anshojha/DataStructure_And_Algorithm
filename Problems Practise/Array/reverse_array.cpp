#include<iostream>
#include <bits/stdc++.h>
using namespace std;



void reverse(int arr[] , int size){
    int st = 0;
    int end = size-1;
    while(st < end){
        swap(arr[st] , arr[end]);
        st++;
        end--;
    }
}


int printArray(int arr[] , int size){
    for(int i =0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
   int n;
   cout<<"Enter the size of the array : ";
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }
   cout<<"--- Printing before reversing ---"<<endl;
   printArray(arr , n);
   reverse(arr , n);
   cout<<"--- Printing after reversing ---"<<endl;
   printArray(arr , n);


   
   

 return 0;}