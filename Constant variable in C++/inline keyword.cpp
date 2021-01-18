#include<iostream>
using namespace std;

inline int max1(int a, int b)
{
    return (a>b)?a:b;
}
int main()
{
    int a,b;
    a=10;b=20;
    int c=max1(a,b);
    cout<<c;

     int p = 5;
    int * const q = &p;
    p++;
    q++;
    (*q)++;
}
