#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n, key;
    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the array element: ";
        cin >> arr[i];
    }
    cout << "Enter the key elemnet to search:" << endl;
    cin >> key;
    cout << binarySearch(arr, n, key) << endl;

    return 0;
}