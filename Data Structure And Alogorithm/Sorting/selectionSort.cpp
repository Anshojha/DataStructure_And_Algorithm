
// Best Case Time Complexity = O(n^2)

// Average Case Time Complexity = O(n^2)

// Wrost Case Time Complexity = O(n^2)



#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i =0 ; i<size-1 ; i++){
        int minIndex=i ;
        for (int j = i+1; j < size; j++)
        {
            if(arr[minIndex] > arr[j] ){
                minIndex = j;
          
            }
        }
        swap(arr[minIndex], arr[i]);

    }
}


int main()
{

    int size ;
    cout<<"Enter the size of the array ";
    cin>>size;
    int arr[size];
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    selectionSort(arr, size);

     for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}