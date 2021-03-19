/*
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".
Example 4:

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".
Note:

1 <= S.length <= 200
1 <= T.length <= 200
S and T only contain lowercase letters and '#' characters.
*/


#include<bits/stdc++.h>
using namespace std;
bool backspaceCompare(string &s1,string &s2)
{
    stack<char> st1;
    stack<char> st2;
    int n1=s1.length();
    int n2=s2.length();
    for(int i=0;i<n1;i++)
    {
        if(s1[i]!='#')
        {
            st1.push(s1[i]);
        }
        else
        {
            if(!st1.empty())
            {
                st1.pop();
            }
        }
    }
    for(int i=0;i<n2;i++)
    {
        if(s2[i]!='#')
        {
            st2.push(s2[i]);
        }
        else
        {
            if(!st2.empty())
            {
                st2.pop();
            }
        }
    }
    while(!st1.empty() && !st2.empty())
    {
        if(st1.top()==st2.top())
        {
            st1.pop();st2.pop();
        }
        else
        {
            return false;
        }
    }
    if(st1.empty() && st2.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s1="ab#c";
    string s2="ad#c";
    cout<<backspaceCompare(s1,s2);
}