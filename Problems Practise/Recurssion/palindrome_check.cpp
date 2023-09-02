#include <iostream>
using namespace std;

bool palindrome_check(string str, int i, int j)
{
    if (i > j)
        return true;
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return palindrome_check(str , i+1 , j-1);
    }
}
int main()
{
    string str = "abcbaass";

    bool isPalindrome = palindrome_check(str , 0 , str.length()-1);

    if(isPalindrome){
        cout<<"Its Palindrome which you are looking for !!";
    }
    else{
        cout<<"Nah bruh its not palindrome !!";
    }

    return 0;
}