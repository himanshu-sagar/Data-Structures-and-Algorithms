#include<iostream>
using namespace std;
int allIndex(int arr[],int n,int p,int ans[])
{
    if(n<=0)
    {
        return 0;
    }
    int out=allIndex(arr+1,n-1,p,ans);
    if(arr[0]==p)
    {
        for(int i=out-1;i>=0;i--)
        {
            ans[i+1]=ans[i]+1;
        }
        ans[0]=0;
        out=out+1;
    }
    else
    {
        for(int i=out-1;i>=0;i--)
        {
            ans[i]=ans[i]+1;
        }
    }
    return out;

}

int main()
{
    int arr[9]={4,7,4,1,4,3,4,2,5};
    int ans[9];

    cout<<allIndex(arr,9,4,ans);
}
