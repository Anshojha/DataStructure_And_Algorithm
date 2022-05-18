#include <stdio.h>
#include <stdlib.h>
void reverse(int arr[], int n)
{
int temp;
        for (int i =0; i <n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
   

}

int main()
{
    int  temp,n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int *arr = (int*) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element:\n");
        scanf("%d", &arr[i]);
    }
    // for (int i =0; i <=n/2; i++)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[n-i-1];
    //     arr[n-i-1] = temp;
    // }
   

    reverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
