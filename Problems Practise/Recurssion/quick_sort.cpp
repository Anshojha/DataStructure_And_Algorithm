#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    //placing pivot at right place 
    int piovotIndex = cnt+s;
    swap(arr[s] , arr[piovotIndex] );
    

    //placing element of right and left at their correct side and position
    int i = s , j = e;

    while( i < piovotIndex && j > piovotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)  
        {
            j--;
        }

        if(i < piovotIndex && j > piovotIndex){
            swap(arr[i++] , arr[j--]);
        }
        
    } 
    return piovotIndex;
}

void quic_sort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
        return;

    // partioning
    int p = partition(arr, s, e);

    // left side sorting
    quic_sort(arr, s, p - 1);

    // right side sorting
    quic_sort(arr, p + 1, e);
}

int main()
{

    int arr[5] = { 1,5,2,8,4};
    int n = 5;

    quic_sort(arr , 0 , n);

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}