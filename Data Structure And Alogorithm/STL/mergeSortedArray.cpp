#include<iostream>
using namespace std;

void merge(int arr1[] ,int n ,int arr2[] , int m , int arr[]){
int i=0 , j=0 , k=0;
while (i<n && j<m)
{
    if(arr1[i]<arr2[j]){
        arr[k++]=arr1[i++];
    }
    else{
        arr[k++]=arr2[j++];
    }
}
// copy the rest of the element

while(i<n){
    arr[k++]=arr1[i++];
}

while(j<m){
    arr[k++]=arr2[j++];
}

}


void print(int arr[] , int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
 int arr1[5]= {1 , 3 , 5 , 7, 9};
 int arr2[3]= {2,4,6 };
 int arr3[8]= {0};
 merge(arr1 ,5, arr2 ,3, arr3);
 print(arr3 , 8);
          
 return 0;}