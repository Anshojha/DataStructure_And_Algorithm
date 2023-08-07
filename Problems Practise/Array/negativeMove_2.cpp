#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void move(vector<int> &ar)
{
    sort(ar.begin(), ar.end());
}
int main()
{
    vector<int> array = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    move(array);
    for (int e : array)
    {
        cout << e << " ";
    }
    return 0;
}