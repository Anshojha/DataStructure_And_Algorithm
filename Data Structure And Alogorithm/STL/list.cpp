#include <iostream>
using namespace std;
#include<list>
int main()
{
    list<int> l;

    list<int> n(5,100);
    for(int i :n){
        cout<<i<<" ";
    }cout<<endl;


    l.push_back(2);
    l.push_front(1);

    for(int i : l){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"Size of -> "<<l.size()<<endl;
    
    l.erase(l.begin());

    cout<<"After Erasing"<<endl;
     for(int i : l){
        cout<<i<<" ";
    }cout<<endl;

     cout<<"After Erasing size ->"<<l.size()<<endl;
    
    return 0;
}