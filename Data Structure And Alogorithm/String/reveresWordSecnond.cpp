#include<iostream>
#include<algorithm>
using namespace std;

string reverseWord(string s){
    int l =0 , r=0;
 while(l<s.length()){
    while(r<s.length() && s[r]!=' '){
        r++;
    }
    reverse(s.begin()+l , s.begin()+r);
    l= r+1;
    r=l;
 }
 return s;
}
int main()
{
  string s = "This is the string we are taliking about";
  cout<<reverseWord(s);
 return 0;}