#include<iostream>
using namespace std;
 void sort012(int a[], int n)
    {
        int c0=0;
        int c1=0;
        int c2=0;
        int i;
        for(i=0;i<n;i++){
            if(a[i]==0){
                c0++;
            }
            else if(a[i]==1){
                c1++;
            }else{
                c2++;
            }
        }
        for(i=0;i<c0;i++){
            a[i]=0;
        }
        for(i=c0;i<c0+c1;i++){
            a[i]=1;
        }
        while(c2--){
            a[i++]=2;
        }
    }
int main()
{
           
 return 0;}