#include<iostream>
using namespace std;

char toLowerCase(char ch){
   if((ch>='a' && ch<='z')||(ch>=0 && ch<=9)){
      return ch;
   }
   else{
      char temp   = ch - 'A' + 'a';
      return temp;
   }
};

void reverse(char s[] , int n){
   int st=0;
   int end = n-1;
   while(st<end){
      swap(s[st], s[end]);
      st++;
      end--;
   }
}
bool checkStringPalindrome(char s[] , int n){
    int e =  n-1;
    int st = 0;
    string org = s;
    while(st<e){
       if(s[st]!=s[e]){
          return 0;
       }
       else{
        st++ ;
        e--;
       }
    }
   return 1;
}
int main()
{
 int  size;
 cout<<"Enter the size of the array ->";
 cin>>size;
char name[size];
cout<<"Enter the word :"<<endl;
cin>>name;
// cout<<"The lowerCase is ->" <<toLowerCase(name);
cout<<"The entered word -> "<<name<<endl;
 reverse(name, size);
 cout<<"The reverse word -> "<<name<<endl;
 cout<<"The given string id  palindrome if 1 and not if 0-> "<<checkStringPalindrome(name,size)<<endl;
 return 0;}