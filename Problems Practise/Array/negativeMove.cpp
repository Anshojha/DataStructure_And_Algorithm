#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[] = {0, -1, 2, -2, 1};
    int s = sizeof(ar)/sizeof(ar[0]);
    cout<<"The size " << s<<endl;
    for(int i = 0 ; i < s; i++){
        for(int j = i+1 ; j < s; j++){
            if(ar[i] > ar[j]){
                swap(ar[i], ar[j]);
            }
        }
    }

  for( int e : ar){
        cout<<e<<" ";
       }  
    return 0;
}