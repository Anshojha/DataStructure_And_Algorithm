#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <=j; k++)
            {
                cout<<a[k]<<" ";
            }
            count++;
             cout<<endl;
        }
        cout<<endl;
    }
    cout<<"The number of subarrays are "<<count<<endl;
    return 0;
}