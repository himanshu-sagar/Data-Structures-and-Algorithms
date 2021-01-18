#include<iostream>
using namespace std;
int sumofDigits(int n)
{
    if(n/10==0)
    {
        return n%10;
    }
    return (n%10)+sumofDigits(n/10);
}
int main()
{
    cout<<sumofDigits(1234);
}
