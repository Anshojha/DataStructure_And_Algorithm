#include<iostream>
#include<vector>
using namespace std;
bool checkRotatedSorted(vector <int> &nums){
    int count=0;
    int size = nums.size();
    for(int i =1 ; i< size;i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[size-1]>nums[0]){
        count++;
    }

   return count<=1;
}

int main()
{

  vector <int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);

    checkRotatedSorted(v);

 return 0;}