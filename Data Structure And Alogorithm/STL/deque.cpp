#include <iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> a;
    a.push_back(1);
    a.push_front(9);
    for(int i :a){
        cout<<i<<" ";
    }cout<<endl;
    a.pop_back();
   for(int i :a){
        cout<<i<<" ";
    }cout<<endl;

    a.push_back(1);
    a.pop_front();
     for(int i :a){
        cout<<i<<" ";
    }cout<<endl;     
    cout<<"First Elemet ->"<<a.at(0);
        return 0;
}