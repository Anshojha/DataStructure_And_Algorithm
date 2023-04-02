#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
      for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
      for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Capacity -> "<<v.capacity()<<endl; //0
    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl; //1
    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl; //2
    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl; //4
    v.push_back(5);
    cout<<"Capacity -> "<<v.capacity()<<endl; //4
    v.push_back(6);
    cout<<"Capacity -> "<<v.capacity()<<endl; //8   
    cout<<"Size-> "<<v.size()<<endl;    //5
    cout<<"Element at 2"<<v.at(2)<<endl;
    cout<<"First or Front Ele -> "<< v.front()<<endl; // 1
    cout<<"Back or LAst Ele -> "<< v.back()<<endl;

    cout<<"<- Before POP ->"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"<- After POP ->"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"<- Before Clear ->"<<endl;
    cout<<v.size()<<endl;
    v.clear();
    cout<<"<- After Clear ->"<<endl;
    cout<<v.size()<<endl;

    return 0;
}