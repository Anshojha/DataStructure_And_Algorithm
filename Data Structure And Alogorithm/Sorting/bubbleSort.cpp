// Time complexity = O(n^2)

// Space commplexity = O(1)




#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        // bool swaped = false;
        for (int j = 0; j < size-i-1; j++)
        {
           if(arr[i]>arr[j]){
            swap(arr[j],arr[i]);
            // swaped = true;
           }
        }

        // if(swaped== false ){
        //     break;
        // }
        
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

    bubbleSort(arr, size);

     for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}