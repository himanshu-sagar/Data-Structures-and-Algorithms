#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pairStar1(char str[],int start)
{
    if(str[start]=='\0')
        return;
    pairStar1(str,start+1);
    if(str[start]==str[start+1])
    {
        for(int i=strlen(str);i>=start+1;i--)
        {
            str[i+1]=str[i];
        }
        str[start+1]='*';
    }
}
void pairStar(char str[])
{
    pairStar1(str,0);
}
int main()
{
    char str[10]="aabcdeep";
    pairStar(str);
    cout<<str;
}
