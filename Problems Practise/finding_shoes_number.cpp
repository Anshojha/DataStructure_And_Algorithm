
// Chef has NN friends.Chef promised that he would gift a pair of shoes(consisting of one left shoe and one right shoe) to each of his NN friends.Chef was about to go to the marketplace to buy shoes, but he suddenly remembers that he already had MM left shoes.

//  What is the minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his NN friends
//     ?
#include<iostream>
using namespace std;
    int main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            cout << (a - b) * 2 + b << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}
