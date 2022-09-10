#include<iostream>
using namespace std;
int main()
{
int n=10;
for (int i = n; i >= 1; i--)
{
    for (int j = n-1; j >= 0 ; j--)
    {
        if(i>j){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
}       
for (int i = 2; i <= n; i++)
{
    for (int j = n-1; j >= 0 ; j--)
    {
        if(i>j){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
}
        
 return 0;
}