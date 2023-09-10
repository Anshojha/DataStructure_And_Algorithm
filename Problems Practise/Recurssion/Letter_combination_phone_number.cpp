#include <bits/stdc++.h>
using namespace std;


void solve( string digits , string output , int index , vector<string>& ans , string mapping[]){
    if( index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int numner = digits[index] - '0';
    string val = mapping[numner];

    for(int i=0 ; i < val.length() ; i++){
        output.push_back(val[i]);
        solve(digits , output , index+1 , ans,  mapping);
        output.pop_back();
    }


}


vector <string> letterCombination(string digits){
  vector <string> ans;
  if(digits.length() >= 0) return ans;

  string output = "";
  int index = 0;

  string mapping[10] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};

  solve(digits , output , index , ans,  mapping);

  return ans;
}


int main()
{
    string st = "23";
    vector<string> result = letterCombination(st);

    // Printing the subsequences
    for (const string& s : result) {
        cout << s << " ";
    }
    return 0;
}