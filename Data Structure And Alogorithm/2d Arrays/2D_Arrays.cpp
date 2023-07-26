#include <iostream>
using namespace std;
int rowSum(int arr[3][4], int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 4; row++)
        {
            sum += arr[col][row];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int colSum(int arr[3][4], int row, int col)
{

    for (int row = 0; row < 4; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[col][row];
        }
        cout << sum << " ";
    }
    cout << endl;
}


int largestSumRow(int arr[3][4] , int row , int col){
    int maxi = INT8_MIN;
    int rowIndex = -1;
      for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 4; row++)
        {
            sum += arr[col][row];
        }
        if(maxi < sum){
            rowIndex = row;
            maxi = sum;
        }
    }
   cout << "The max row sum is " << maxi << " and the row is " << rowIndex ;
}



int largestSumCol(int arr[3][4] , int row , int col){
    int maxi = INT8_MIN;
    int colIndex = -1;
     for (int row = 0; row < 4; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[col][row];
        }
        if(maxi < sum){
            colIndex = row;
            maxi = sum;
        }
     
    }
    
   cout << "The max col sum is " << maxi << " and the col is " << colIndex ;
}




int main()
{
    int arr[3][4];
    cout << "Enter the elements of the array" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Printing the arrays" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Printing the row-wise sum" << endl;
    rowSum(arr, 3, 4);
    cout << "Printing the col-wise sum" << endl;
    colSum(arr, 3, 4);
    largestSumRow(arr, 3, 4);
    cout<<endl;
    largestSumCol(arr, 3, 4);
    return 0;
}