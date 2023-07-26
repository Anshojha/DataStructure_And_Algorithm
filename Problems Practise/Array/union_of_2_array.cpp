#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int doUnion(int arr[], int n, int arr2[], int m)
{
  int i = 0;
  int j = 0;
  int count = 0;

  while (i < n && j < m)
  {
    if (arr[i] < arr2[j])
    {                                        
      count++;
      i++;
    }
    else if (arr[i] > arr2[j])
    {
      count++;
      j++;
    }
    else
    {
      i++;
      j++;
      count++;
    }
  
  }
  while (i < n)
    {
      count++;
      i++;
    }
    while (j < m)
    {
      count++;
      j++;
    }
  return count;
}
int main()
{
  int ar1[5] = {1, 2, 3, 4, 5};
  int ar2[3] = {1, 2, 3};

  cout << doUnion(ar1, 5, ar2, 3);

  return 0;
}