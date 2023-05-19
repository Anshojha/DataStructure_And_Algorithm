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
  string s2;
  cout<<"Enter the second string as per your thought"<<endl;
  getline(cin,s2);
  cout<<reverseWord(s)<<endl;
  cout<<reverseWord(s2)<<endl;
 return 0;}