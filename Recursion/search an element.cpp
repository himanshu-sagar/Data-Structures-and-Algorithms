#include<iostream>
using namespace std;
bool searching(int arr[],int n,int p)
{
    if (n<=0)
        return false;
    if(arr[0]==p)
        return true;
    bool out=searching(arr+1,n-1,p);
    return out;
}
int main()
{
    int arr[5]={2,4,7,3,5};
    cout<<searching(arr,5,7);
}
