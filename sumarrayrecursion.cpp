#include<iostream>
using namespace std;


int sum(int arr[], int length)
{
    if(length==1)
    return *arr;

    return *(arr)+sum(arr+1,length-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr, length);
}