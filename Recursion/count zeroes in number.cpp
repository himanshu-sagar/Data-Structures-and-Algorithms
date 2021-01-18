#include<iostream>
using namespace std;
int numZeros(int n)
{
    if (n==0)
        return 1;
    if(n/10==0)
        return 0;
    int out=numZeros(n/10);
    if(n%10==0)
    {
        return out+1;
    }
    return out;
}
int main()
{
    cout<<numZeros(1000);
}
