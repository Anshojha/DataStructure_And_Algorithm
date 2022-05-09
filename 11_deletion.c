#include <stdio.h>
 
void display(int arr[],int n){
    //This is code  traversing 
    for (int i = 0; i < n; i++)
    {
      printf("%d ",arr[i]); 
    }
    printf("\n");
};

//This is code  deletion 
    void sortedDeletion(int arr[],int size,int index){
        if(index > 100){
            return -1;
        }
        for (int i = index; i < size; i++)
        {
            arr[i]=arr[i+1];
        }
        
       
        
    };
int main(){

    int arr[100]={7,8,12,27,88};
    int size=5,index=3;
    display(arr,size);
    
    sortedDeletion(arr,size,index);
    size -= 1;
    display(arr,size);
     return 0;
}