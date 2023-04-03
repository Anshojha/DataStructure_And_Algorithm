#include <iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Jai");
    s.push("Shree");
    s.push("Ram");
    cout<<"The top most element is -> "<< s.top()<<endl;
    cout<<"The size os stack is -> "<<s.size()<<endl;
    return 0;
}