#include<iostream>
using namespace std;

int sum(int arr[], int size ){
    
   if(size <=0) return 0;
    return (sum(arr , size-1) + arr[size-1]);
   }


int main()
{
int arr[8]={1,2,3,4,5,6,7,8}  ;
int s = 8;
cout<<sum(arr,s);
 return 0;}