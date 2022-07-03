#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int org=x;
         if(x<0){return false;}
        int rev=0;
        while(x>0){
            rev = rev*10+x%10;
            x = x/10;
        }
        if(rev==org){return true;}
        else{return false;}
    }
};
    

int main()
{
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
        Solution sol;
    cout<<sol.isPalindrome(num);
    return 0;
}