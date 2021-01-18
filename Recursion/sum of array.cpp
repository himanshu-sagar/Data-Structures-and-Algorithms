#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
    if(n<=1)
    {
        return arr[0];
    }
    int out=sum(arr+1,n-1);
    return out+arr[0];
}
int main()
{
    int arr[5]={2,4,7,3,5};
    cout<<sum(arr,5);
}
