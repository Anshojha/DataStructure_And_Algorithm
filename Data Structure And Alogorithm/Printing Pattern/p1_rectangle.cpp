#include<iostream>
using namespace std;
int main()
{
  int row , col;
  cout<<"Enter the number of Row ";        
  cin>>row; 
  cout<<"Enter the number of Column ";        
  cin>>col; 
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
        cout<<"*";
    }
    cout<<endl;
  }
  
 return 0;
}