#include <iostream>
using namespace std;
int main()
{
    int n ;

    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n+1];
    arr[n]=-1;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " element: ";
        cin >> arr[i];
    }
    int ans=0;
    int mx=-1;
    if(n==1){
        cout<<"1";
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx=max(mx,ans);
    }
    cout<<ans<<endl;
    return 0;
}