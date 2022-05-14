#include <stdio.h>
// Function for linear search
int linearsearch(int arr[],int size, int element){
for (int i = 0; i < size; i++)
{
    if (arr[i]==element)
    {
        return i;
    }
}}
int binarysearch(int arr[],int size, int element){
for (int i = 0; i < size; i++)
{
    int low,high,mid;
    low =0;
    high=size-1;

    while (low<=high)
    {
       mid = (low + high)/2;
       if(arr[mid]==element){
           return mid;
       }
       if(arr[mid]<element){
           low = mid+1;
       }
       else{
           high = mid-1;
       }
    }
    return -1;
    
}
return -1;
}
int main()
{
int arr[]={1,25,38,57,63,79,82,97,101,116,123,137,149};
int size = sizeof(arr)/sizeof(int);
int element = 101;
int searchingIndex = binarysearch(arr,size,element);
printf("The element %d is found at %d",element,searchingIndex);
    return 0;
}