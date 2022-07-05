#include <iostream>
using namespace std;
int totalSum(int n)
{
   int result=0;
   for (int i = 1; i <= n; i++)
   {
    result +=i; 
   }
  cout<<"The sun of first "<<n<< "naturl number is "<<result<<endl;
}

int main()
{
    int n;
    cin >> n;
    totalSum(n);
    return 0;
}