#include<iostream>
using namespace std;
int count(int n){
    if(n/10 == 0){
        return 1;
    }
    int smallAns = count(n / 10);
    return smallAns + 1;
}
int main()
{
    cout<<count(12345);
}
