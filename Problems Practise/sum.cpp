#include<iostream>
using namespace std;
int sumofnatural(int n){
    int sum = (n*(n+1))/2;
     cout<<sum;
}
int main()
{ int num;
           cout<<"Enter the number :"<<endl;
           cin>>num;
            sumofnatural(num);
 return 0;}