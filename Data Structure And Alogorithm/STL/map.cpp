#include<iostream>
#include <map>
using namespace std;
int main()
{   map<int , string> m;
m[12] = "Ram";
m[1] = "Jai";
m[2] = "Shree";
m.insert( {5 , "Krishna"});
cout<<"-> Before Erase <-"<<endl;

for(auto i : m){
    cout<<i.first<<" "<<i.second<<endl;
}cout<<endl;

cout<<"Finding 13 -> " << m.count(13)<<endl;
cout<<"Finding 12 -> " << m.count(12)<<endl;

m.erase(12);
cout<<"-> After Erase <- "<<endl;

for(auto i : m){
    cout<<i.first<<" "<<i.second<<endl;
}cout<<endl;

auto it = m.find(1);
for(auto i = it ; it!= m.end();i++){
    cout<<(*i).first<<endl;
}

           
 return 0;}


// Erase insert count find --> O{log n}
// 