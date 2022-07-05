#include<iostream>
using namespace std;

int sortingArray(int arr[],int n) {
    int temp =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    
}

int   main()
{
int n;
cout<<"Enter the size of Array: ";
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cout<<"Enter the "<<i+1<<" element :";
    cin>>arr[i];
}
cout<<"****ArrayWithoutSorting*****"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
sortingArray(arr,n);

cout<<"****ArrayAfterSorting*****"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}