
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;

    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " element: ";
        cin >> arr[i];
    }
    const int N =199999;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    
int minidx=INT_MAX;

for (int i = 0; i < n;i++)
{
    if(idx[arr[i]]!=-1){
        minidx=min(minidx,idx[arr[i]]);
    }
    else{
        idx[arr[i]]=i;
    }
}

if(minidx==INT_MAX){
    cout<<"-1"<<endl;
}
else{
    cout<<minidx+1<<endl;
}


    return 0;
}