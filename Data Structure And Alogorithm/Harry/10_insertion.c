#include <stdio.h>
 
void display(int arr[],int n){
    //This is code  traversing 
    for (int i = 0; i < n; i++)
    {
      printf("%d ",arr[i]); 
    }
    printf("\n");
};

//This is code  insertion 
    int sortedInsertion(int arr[],int size,int element,int capacity,int index){
        if(size > capacity){
            return -1;
        }
        for (int i = index; i >=index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return 1;
        
    };
int main(){

    int arr[100]={7,8,12,27,88};
    int size=4, element = 45,index=2;
    display(arr,size);
    
    sortedInsertion(arr,size,element, 100,index);
    size += 1;
    display(arr,size);
     return 0;
}