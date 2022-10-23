#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}




void swapAlternate(int arr[],int size){
for (int i = 0; i < size; i=i+2)
{
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
}

}

int main(){
    int evenArr[6]={1,2,3,4,5,6};
    int oddArr[5]={1,2,3,4,5};
    swapAlternate(evenArr,6);
    swapAlternate(oddArr,5);
    
    printArray(evenArr,6);
    printArray(oddArr,5);
    return 0;
}