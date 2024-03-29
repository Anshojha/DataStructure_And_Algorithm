#include <iostream>
using namespace std;

int merge(int *arr, int s, int e)
{
    int mid = (e + s) / 2;
    int count = 0;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArraiIndex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArraiIndex++];
    }
    mainArraiIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArraiIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArraiIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArraiIndex++] = first[index1++];
            count++;
        }
        else
        {
            arr[mainArraiIndex++] = second[index2++];
            count++;
        }
    }

    while (index1 < len1)
    {
        arr[mainArraiIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArraiIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
    return count;
}

int mergeSort(int *arr, int s, int e)
{
    int count = 0;
    if (s >= e)
    {
        return count;
    }

    int mid = (s + e) / 2;

    count += mergeSort(arr, s, mid);
    count += mergeSort(arr, mid + 1, e);

    count += merge(arr, s, e);
    return count;
}

int main()
{
    int arr[2] = {5, 8};
    int n = 2;

    cout << mergeSort(arr, 0, n - 1) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}