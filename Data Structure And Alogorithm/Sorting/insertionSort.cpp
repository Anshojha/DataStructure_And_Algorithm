#include <iostream>
using namespace std;

void insertionSort(int arr[], int size ){
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
         for (int j = i-1; j >=0; j--)
         {
           if(key > arr[j]){
            arr[j+1]= arr[j];
           }
           
         }
         
    }
    
 

    
}


int main()
{

    return 0;
}