#include<iostream>
using namespace std;
int multiplication(int a,int b)
{
    if(b<=0)
        return 0;
    int out=multiplication(a,b-1);
    return out+a;
}
int main()
{
    cout<<multiplication(9,8);
}
