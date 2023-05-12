#include<iostream>
#include<vector>
using namespace std;

void swapZeroes(int nums[] , int s){
int i=0;

for(int j=0;j<s;j++){
    if(nums[j]!=0){
        swap(nums[j] , nums[i]);
        i++;
    }
}
}
int main()
{
int arr[10]={1,0,0,0,7,9,0,0,7,0};
   

swapZeroes(arr,10);

for (int i = 0; i < 10; i++)
{
cout<<arr[i]<<endl;
}

 return 0;}