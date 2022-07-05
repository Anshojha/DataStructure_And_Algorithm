#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the size of array : ";
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cout<<"Enter the "<<i<<" element: ";
    cin>>arr[i];
}
cout<<"****ArrayWithoutSorting*****"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
int counter=1;
while (counter<n)
{
   for (int i = 0; i < n-counter; i++)
   {
    if(arr[i]>arr[i+1]){
        int temp =0;
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
   }
   counter++;
}

cout<<"****ArrayAfterSorting*****"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

           
 return 0;
}