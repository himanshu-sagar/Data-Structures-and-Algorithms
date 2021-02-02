#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void removeConsecutiveDuplicates(char str[],int start)
{
    if(strlen(str)<=1 || str[start]=='\0')
    {
        return;
    }
    if(str[start]!=str[start+1])
    {
        removeConsecutiveDuplicates(str,start+1);
    }
    else
    {
        int i=start+1;
        for(; str[i]!='\0';i++)
        {
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        removeConsecutiveDuplicates(str,start);
    }
}
int main()
{
    char str[30]="baabbsbbahsahbahshhbhsjjjj";
    removeConsecutiveDuplicates(str,0);
    cout<<str;
}
