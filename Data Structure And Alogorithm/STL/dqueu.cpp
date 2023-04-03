#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    deque<int> r;
    d.push_back(1);

    d.push_front(2);
    // d.insert(d,8);

    cout<<endl;
    cout<<"The first elemet is ->"<<d.at(1)<<endl;
      for(int i:d){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"Whether this element is empty or not "<<d.empty()<<endl;
    cout<<"Whether this element is empty or not "<<r.empty()<<endl;

    cout<<"The size before deletion->"<<d.size()<<endl;
    cout<<"The size ->"<<r.size()<<endl;
    d.erase(d.begin(), d.begin()+2);
    cout<<"The size after deletion ->"<<d.size();





           
 return 0;}