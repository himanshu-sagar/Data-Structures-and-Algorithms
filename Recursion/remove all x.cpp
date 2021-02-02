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
void removeX1(char str[])
{
    if(str[0]=='\0')
    {
        return;
    }
    if(str[0]!='x')
    {
        removeX1(str+1);
    }
    else
    {
        int i=1;
        for( ;str[i]!='\0';i++)
        {
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        removeX1(str);
    }
}

int main()
{
    char str[10]="cxsxd";
    removeX1(str);

    cout<<str;
}
