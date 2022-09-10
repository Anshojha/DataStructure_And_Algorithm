#include<iostream>
using namespace std;

int main()
{
int n;

cout<<"Size of array: ";
cin>>n;

int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<"**********Unsorted Arrray**********"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
for (int i = 1; i < n; i++)
{
    int currnt = arr[i];
    int j = i-1;
    while(currnt<arr[j] && j>=0){
        arr[j+1]=arr[j] ;
        j--; 
    }
    arr[j+1]=currnt;
}

cout<<"**********Sorted Array*********"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}



 return 0;}