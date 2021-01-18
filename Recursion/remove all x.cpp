#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void removeX(char input[]) {
    if (input [0]=='\0')
        return;
    int l= strlen(input);
    int l1 = l;
    if (input[0]=='x')
    {
        for (int i=0;input[i]!='\0';i++)
        {
            input[i] = input[i+1] ;
        }
        l1--;
    }
    if (l1==l)
    {
        return removeX(input+1);
    }
    else
    {
        return removeX(input);
    }
}


int main()
{
    char str[10]="cxsxd";
    removeX(str);

    cout<<str;
}
