#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string , int>m;
    pair<string , int > p = make_pair("jai" , 1);
    m.insert(p);
    pair<string , int > pair("Shree" , 2);
    m.insert(pair);

    cout<<"m[shree] -> " << m["Shree"]<<endl;
    cout<<"m.at(jai) -> " << m.at("jai") <<endl;

    // unordered_map<string , int > :: iterator it = m.begin();

    // while( it != m.end()){
    //     cout<<it->first << " " << it -> second << endl;
    //     it++;
    // }
    cout<<"map -> " << endl;
    map<string , int > :: iterator its = m.begin();

    while( its != m.end()){
        cout<<its->first << " " << its -> second << endl;
        its++;
    }

    return 0;
}