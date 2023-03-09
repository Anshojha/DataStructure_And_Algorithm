#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bst(int arr[], int size, int ele)
{
    int start =1;
    int end = size;
    cout<<end;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        
        if (ele == arr[mid]){
              
             return mid;
        }
           
        else if (ele > arr[mid]){
             start = mid + 1;
        }
           
        else{
              end = mid - 1; 
        }
         

        mid = (start +end)/2;
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
   bst(arr, size , tar);
    return 0;
}