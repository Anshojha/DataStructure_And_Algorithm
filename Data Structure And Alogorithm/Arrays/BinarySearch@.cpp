#include<iostream>
using namespace std;
int main()
{
    int n,upperL,lowerL=0,mid,ele;
    cout<<"Enter the size of the array:";
    cin>>n;
        upperL=n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<< i << " elemnt: ";
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";  
    }
    cout<<endl;

    cout<<"Enter the element you want to search: ";
    cin>>ele;
    while (lowerL<=upperL)
    {
        mid = (lowerL+upperL)/2;
    cout<<mid;
        if(ele==arr[mid]){
         return mid;
        }
        else if(ele < arr[mid]){
            upperL=mid-1;
        }
        else {
            lowerL = mid+1;
        }
    }
    
    
           
 return 0;}