#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(char str[],int start,int end1)
{
    if(start-end1==1 || start-end1==0)
    {
        return true;
    }
    if(str[start]!=str[end1])
    {
        return false;
    }

    return checkPalindrome(str,start+1,end1-1);
}
bool palindrome(char str[])
{
    int n=strlen(str);
    return checkPalindrome(str,0,n-1);
}
int main()
{
    char str[12]="aabbabbaa";
    cout<<palindrome(str);
}
