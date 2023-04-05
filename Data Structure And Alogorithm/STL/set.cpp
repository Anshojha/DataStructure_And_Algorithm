#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(9);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(0);
    for(int i : s){
        cout<<i<<" ";
    }cout<<endl;

    s.erase(s.begin());
    set<int>::iterator it = s.begin();
    ++it;

       s.erase(it);
    cout<<"<- Mitne k bad or iterrator k bad bhi -> "<<endl;
       for(int i : s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 hai kya ->"<<s.count(5)<<endl;
    cout<<"9 hai kya -> "<<s.count(9)<<endl;
    s.insert(9);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(3);
    s.insert(0);
    set<int>::iterator itr = s.find(1);
    for(auto it = itr ;it !=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

    // insert find count and find time complexity is O(logn)
    // size begin and empty time complexity is O(1)
    return 0;
}