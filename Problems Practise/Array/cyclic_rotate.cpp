#include <iostream>
using namespace std;

int cycRotate(int arr[] ,int d , int size){
  // int size = sizeof(arr)/size?of(arr[0]);
  int temp[size];
  for (int i = 0; i < size; i++)
  {
    temp[(i+d)%size] = arr[i];
  }
   for(int e : temp){
        cout<<e;
     }
}



int main()
{
    int arr[7] = {1 , 2 , 3 , 4, 5,6 ,7};
     cycRotate(arr , 8 , 7);
    return 0;
}