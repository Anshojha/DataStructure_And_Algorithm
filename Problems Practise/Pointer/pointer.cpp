#include <iostream>
using namespace std;
int main()
{
    // int arr[10] = {1,2,3,4,5,6};
    // cout<<"Add of the first memory block "<<arr <<endl;
    // cout<<arr[0]<<endl;
    // cout<<"Again the add of the first block -> &"<<&arr[0]<<endl;
    // cout<<"Add of the first blocl -> *"<<*arr<<endl;
    // cout<<"*arr+2 -> "<<*arr+2<<endl;
    // cout<<"*(arr + 1) -> "<<*(arr + 1)<<endl;
    // int i =3;
    // cout<<"i[arr] -> "<<i[arr]<<endl;


    // int temo[10];
    // cout<<"sizeof(temo)-> "<<sizeof(temo)<<endl;
    // cout<<"sizeof(&temo)-> "<<sizeof(&temo)<<endl;
    // cout<<"sizeof(*temo)-> "<<sizeof(*temo)<<endl;

    // int *ptr = &temo[0];   
    // cout<<"sizeof(ptr)-> "<<sizeof(ptr)<<endl;
    // cout<<"sizeof(&ptr)-> "<<sizeof(&ptr)<<endl;
    // cout<<"sizeof(*ptr)-> "<<sizeof(*ptr)<<endl;

    // int a[10] ={1,2,3,4};
    // cout<<"&a[0]-> "<<&a[0]<<endl;
    // cout<<"&a-> "<<&a<<endl;
    // cout<<"a-> "<<a<<endl;

    // int *p = &a[0];
    // cout<<"p-> "<<p<<endl;
    // cout<<"&p-> "<<&p<<endl;
    // cout<<"*p-> "<<*p<<endl;

    int arr[10];
    // arr = arr+1;  ERROR
    int *p = &arr[0];
    cout<< "p-> "<<p<<endl;
    p += 1;
    cout<<"p-> "<<p<<endl; 
    return 0; 
}