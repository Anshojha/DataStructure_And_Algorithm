#include <iostream>
using namespace std;

void rotate(int arr[] , int n , int k){
    int temp[n];
    for (int  i = 0; i < n; i++)
    {
        temp[(i+k)%n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
    }
    
}
main()
{
    int Array[] = {1, 2, 3, 4, 5  , 45, 456, 3456};
    int N = sizeof(Array) / sizeof(Array[0]);
    // cout << N;
    int K = 19;

    rotate(Array, N, K);
    return 0;
}