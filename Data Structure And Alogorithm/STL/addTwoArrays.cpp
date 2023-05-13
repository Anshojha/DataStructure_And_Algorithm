#include <iostream>
#include <vector>
using namespace std;

vector <int>  reverse(vector<int> arr1){
    int s =0;
    int e = arr1.size()-1;

    while(s<e){
        swap(arr1[s++ ] , v[e--]);
    }
}

vector <int> addTwoArrays(vector<int> &arr1, int n, vector<int> &arr, int m)
{
    int sum = 0;
    int carry = 0;
    int i = n - 1;
    int j = m - 1;
    while (i >= 0 && j >= 0)
    {
        sum = arr1[i] + arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        i--;
        j--;
        ans.push_back(sum);
    }

    while (i >= 0)
    {
        sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        i--;
        ans.push_back(sum);
    }
    while (j >= 0)
    {
        sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        j--;
        ans.push_back(sum);
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
  
    return reverse(ans);
}
int main()
{

    vector<int> a[2] = {3, 3};
    vector<int> b[3] = {4, 5, 1};

    addTwoArrays(a, 2, b, 3);
    return 0;
}