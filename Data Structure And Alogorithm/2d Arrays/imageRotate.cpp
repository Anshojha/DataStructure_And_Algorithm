#include<iostream>
using namespace std;
// int rotSqMat(int arr[4][4] , int row , int col){
//     int ans[row][col];
//     for (int row = 0; row < 4; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             ans[col][4-row-1] = arr[row][col];
//         }
        
//     }
//     cout<<ans;
// }
int main()
{
    int n;
    cout<<"Enter the size of square matrix : "<<endl;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
            for (int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
            }           
    }

    cout<<"***** Printing the square matrix ******"<<endl;

    for (int i = 0; i < n; i++)
    {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j]<<" ";
            }       
            cout<<endl;    
    }

    cout<<"***** Rotated image of matrix *****"<<endl;

    int ans[n][n];

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            ans[col][n-1-row] = arr[row][col];
        }
        
    }
    





    for (int i = 0; i < n; i++)
    {
            for (int j = 0; j < n; j++)
            {
                cout<<ans[i][j]<<" ";
            }       
            cout<<endl;    
    }

    
           
 return 0;}