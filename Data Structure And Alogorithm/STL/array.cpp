#include <iostream>
#include <array>
using namespace std;
int main()
{
    int basic[3]= {1,3,5}; // Siple Way
    array<int , 4>a = {1,2,3,4}; // Using array function
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at a[2]->"<<a.at(2)<<endl; // 3
    cout<<"Empty or not ->"<<a.empty()<<endl; // 0(False)
    
    cout<<"First or Front Ele -> "<< a.front()<<endl; // 1
    cout<<"Back or LAst Ele -> "<< a.back()<<endl; // 4

    return 0;
}

//Output 
// 1
// 2
// 3
// 4