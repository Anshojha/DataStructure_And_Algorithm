#include<iostream>
using namespace std;
int main()
{
        int n ,mx=-1999999;;
cout<<"Enter the size of array : ";
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cout<<"Enter the "<<i<<" element: ";
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
  mx= max(mx,arr[i]);
  cout<<mx<<endl;
}

           
 return 0;
}