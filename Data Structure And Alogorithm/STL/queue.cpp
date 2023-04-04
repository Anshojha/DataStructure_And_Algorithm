#include<iostream>
#include<queue>
using namespace std;
int main()
{
     queue<string> q;

     q.push("JAi");
     q.push("Shree");
     q.push("Ram");
     cout<<"The size of the queue is ->"<<q.size()<<endl;
     cout<<"Front -> "<<q.front()<<endl;
     q.pop();
     cout<<"Front After POP-> "<<q.front()<<endl;
      cout<<"The size of the queue after pop ->"<<q.size()<<endl;

 return 0;}