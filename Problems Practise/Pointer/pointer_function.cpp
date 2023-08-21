#include<iostream>
using namespace std;

void print(int *p){
    cout<<"p-> "<<p<<endl;
    cout<<"*p-> "<<*p<<endl;
}


void update(int *p){
  p += 1;
}
int main()
{
    int value =5;
    int *p = &value;
    cout<<"Before->"<<endl;
    print(p);
    update(p);
    cout<<"after update->"<<endl;
    print(p);


 return 0;}