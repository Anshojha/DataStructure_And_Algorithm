#include<iostream>
using namespace std;

void merge(int arr1[] , int m , int arr2[] , int n ){
    int i=0 , j=0 ;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr1[i++] = arr2[j++];
        }
    }
}

void display(int arr[] , int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}



int main()
{


int arrA[10]= {1,3,7,9};
int arrB[3]  ={2,5,8};


merge(arrA ,10 , arrB , 3);

display(arrA , 10);



 return 0;}