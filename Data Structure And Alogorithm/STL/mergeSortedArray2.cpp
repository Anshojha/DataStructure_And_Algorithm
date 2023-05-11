#include<iostream>
using namespace std;

void merge(int array1[], int m, int array2[], int n) {
    int i = m - 1; // Pointer to last element in array1
    int j = n - 1; // Pointer to last element in array2
    int k = m + n - 1; // Pointer to last position of merged array
    
    // Merge the two arrays
    while (i >= 0 && j >= 0) {
        if (array1[i] > array2[j]) {
            array1[k] = array1[i];
            i--;
        } else {
            array1[k] = array2[j];
            j--;
        }
        k--;
    }

    // Add remaining elements from array2
    while (j >= 0) {
        array1[k] = array2[j];
        j--;
        k--;
    }
}


void display(int arr[] , int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}



int main()
{


int arrA[10]= {1,3,7,9,0,0,0,0,0};
int arrB[3]  ={2,5,8};


merge(arrA ,10 , arrB , 3);

display(arrA , 10);



 return 0;}