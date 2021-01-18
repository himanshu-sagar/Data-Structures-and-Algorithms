#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;
    int out=factorial(n-1);
    return n* out;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" :"<<factorial(n);
}
