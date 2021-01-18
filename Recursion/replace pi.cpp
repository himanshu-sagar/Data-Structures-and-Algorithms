#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void replacePI1(char str[],int start)
{
    if(strlen(str)<=1 || str[start]=='\0')
        return ;
    replacePI1(str,start+1);
    if(str[start]=='p' && str[start+1]=='i')
    {
        for(int i=strlen(str);i>=start+2;i--)
            str[i+2]=str[i];
        str[start+0]='3';
        str[start+1]='.';
        str[start+2]='1';
        str[start+3]='4';
    }

}
void replacePI(char str[])
{
    replacePI1(str,0);
}
int main()
{
    char str[10]="picpisd";
    replacePI(str);
    cout<<str;
}
