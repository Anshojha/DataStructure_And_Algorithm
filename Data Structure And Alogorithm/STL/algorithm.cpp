#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    cout<<"Finding 6->"<<binary_search(v.begin(),v.end(),2)<<endl;
    cout<<"Lower Bound -> "<<lower_bound(v.begin(),v.end(),2)- v.begin()<<endl;
    cout<<"Lower Bound -> "<<upper_bound(v.begin(),v.end(),8)- v.begin()<<endl;

    int a = 23;
    int b = 56;
    cout<<"Max "<<max(a,b)<<endl;
    cout<<"Min "<<min(a,b)<<endl;
    cout << "Before Swap "<< " a = "<< a <<endl<<" b = "<<b<<endl;
    swap(a,b);
    cout << "After Swap "<< " a = "<< a <<endl<<" b = "<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"String ->"<<abcd<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    cout <<"After rotating -> "<<endl;
    for(int i : v){
        cout<<i<<" ";
    }

    return 0;
}