#include<iostream>
using namespace std;

bool search(int arr[],int size, int target){
    if(size <= 0) return false;
    if(arr[size-1]== target) return true;
    search(arr,size-1,target);
}
int main()
{

 int arr[4] = {1,3,4,6};
 cout<<search(arr , 4,0);

 return 0;}