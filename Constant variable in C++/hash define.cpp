#include<iostream>
using namespace std;
#define PI 3.14
#define MULTIPLY(a, b) a*b
#define SQUARE(x) x*x

int main()
{
    int r;
    cin>>r;
    cout<< PI * r * r<<endl;
    cout<<PI;
    cout <<endl<< MULTIPLY(2+9, 3+7);
    cout<<"\n"<<SQUARE(9);
    int x = 36 / SQUARE(6);
    cout << endl<<x;
}
