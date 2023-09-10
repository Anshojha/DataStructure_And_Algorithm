#include <bits/stdc++.h>
using namespace std;


void solve(string str , string output , int index , vector<string>& ans){
    if( index >= str.length()){
        if(output.length() > 0){
          ans.push_back(output);
        }
        return;
    }

 // Include the current character in the output
    solve(str, output + str[index], index + 1, ans);

 // Exclude the current character from the output
    solve(str, output, index + 1, ans);
}

vector<string> subsequeces(string str){

vector<string> ans;
// vector<string> output;
string output = "";
int index = 0;
solve(str , str , index , ans);
return ans;
}


int main()
{

    string st = "abc";
    vector<string> result = subsequeces(st);

    // Printing the subsequences
    for (const string& s : result) {
        cout << s << " ";
    }

 return 0;}