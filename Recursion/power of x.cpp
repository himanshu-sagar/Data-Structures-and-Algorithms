#include<iostream>
using namespace std;
int power(int x,int n)
{
    if (n==0)
        return 1;
    if(n==1)
        return x;
    int out=power(x,n-1);
    return x*out;
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<power(x,n);
}
