#include <iostream>
using namespace std;

// void reverse(string& str, int i, int j)
// {
//     cout<<"Call received from the recurssion "<<str<<endl;
//     if (i > j)
//     {
//         return;
//     }

//     swap(str[i], str[j]);
//     i++;
//     j--;
//     reverse(str, i, j);
// }


void reverse(string& str , int i){
    cout<<str<<endl;
    if(i==str.length()) return;
    int n = str.length()-i-1;
    swap(str[i],str[n]);
    reverse(str , i+1);
}

int main()
{
    string str  = "abcdeg";
    reverse(str ,0);
    cout<<str;
    return 0;
}