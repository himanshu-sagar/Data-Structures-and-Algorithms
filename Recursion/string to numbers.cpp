#include<iostream>
#include <bits/stdc++.h>
using namespace std;
double stringToNumber(char str[])
{
    if(strlen(str)==1)
    {
        return double((str[0]-'0'));
    }
    double out=stringToNumber(str+1);
    double k=(strlen(str)-1);
    double b=str[0]-'0';

    return  b*pow(10,k)+out;
}
int stringToNumber1(char str[])
{
    if(str[0]=='\0')
    {
        return 0;
    }
    int out=stringToNumber1(str+1);
    int k=strlen(str)-1;
    int d=(str[0]-48)*pow(10,k);
    return  d+out;
}
int main()
{
    char str[9]="00123";
    cout<<stringToNumber(str);
}
