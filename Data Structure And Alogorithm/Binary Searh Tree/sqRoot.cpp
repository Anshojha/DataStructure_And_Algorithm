#include<iostream>
using namespace std;
long long int sqRoot(int n){
    int start =1;
    int end=n;
    int root = -1;
    long long mid = start + (end -start)/2;

    while (start<=end)
    {
        if(mid * mid == n){
            return mid;
        }
        else if ( mid*mid > n){
            end = mid-1;
        }
        else {
            start = mid +1;
        }
        mid = start + (end -start)/2;
    }
    
}



double precisedAns(int n , int precise, int tempSol){
    double ans = tempSol;
    double fanctor  =  1;
    for(int i=0;i<precise ;i++){
        fanctor = fanctor/10;
        for (double j=0;j*j<n;j += fanctor ){
            ans =j;
        }
        return ans; 
    }

}
int main()
{

        long long int n;
        cout<<"Enter the sqRoot :"<<endl;
        cin>>n;
        cout<<sqRoot(n);    
        cout<<precisedAns(n);    
 return 0;}