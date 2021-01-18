#include<iostream>
#include <bits/stdc++.h>
using namespace std;
double geometricSum(int k)
{
    if(k<=0)
    {
        return 1;
    }
    double out=geometricSum(k-1);
    double ans=1 / (double)pow(2, k);
    return out+ans;
}


int main()
{
    cout<<geometricSum(4);
}
