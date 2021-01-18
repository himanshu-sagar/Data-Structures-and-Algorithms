#include<iostream>
using namespace std;
int firstIndex(int arr[],int n,int p)
{
    if(n<=0)
        return -1;
    if(arr[0]==p)
        return 0;

    int out=firstIndex(arr+1,n-1,p);
    if (out!=-1)
    {
        return out+1;
    }
    else
        return -1;

}
int main()
{
    int arr[7]={4,7,2,3,2,5};
    cout<<firstIndex(arr,7,2);
}
