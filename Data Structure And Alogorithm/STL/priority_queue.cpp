#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // Way to create the max heap
    //  the poped element always be the greated element among the pushed element
    priority_queue<int> maxi;

    // min heap

    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(5);
    maxi.push(4);
    int n = maxi.size();
    cout<<"The size of maxi -> "<<maxi.size()<<endl;

    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop(); 
    }cout<<endl;

    cout<<"Tu bata bhai bade -> "<<maxi.empty()<<endl;
    cout<<"The after size of maxi -> "<<maxi.size()<<endl;

    cout<<"--Its min heap--"<<endl;
        mini.push(1);
    mini.push(5);
    mini.push(4);
    int n1 = mini.size();
    cout<<"The size of mini -> "<<mini.size()<<endl;

    for(int i=0;i<n1;i++){
        cout<<mini.top()<<" ";
        mini.pop(); 
    }cout<<endl;
    cout<<"The After del size of mini -> "<<mini.size()<<endl;
    cout<<"Khali hai kya tu chote-> "<<mini.empty()<<endl;
    cout<<"Tu bata bhai bade -> "<<maxi.empty()<<endl;
    return 0;
}