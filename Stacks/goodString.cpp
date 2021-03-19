/*
Given a string s of lower and upper case English letters.

A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:

0 <= i <= s.length - 2
s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.

Return the string after making it good. The answer is guaranteed to be unique under the given constraints.

Notice that an empty string is also good.

 

Example 1:

Input: s = "leEeetcode"
Output: "leetcode"
Explanation: In the first step, either you choose i = 1 or i = 2, both will result "leEeetcode" to be reduced to "leetcode".
Example 2:

Input: s = "abBAcC"
Output: ""
Explanation: We have many possible scenarios, and all lead to the same answer. For example:
"abBAcC" --> "aAcC" --> "cC" --> ""
"abBAcC" --> "abBA" --> "aA" --> ""
Example 3:

Input: s = "s"
Output: "s"
 

Constraints:

1 <= s.length <= 100
s contains only lower and upper case English letters.
*/
#include<bits/stdc++.h>
using namespace std;
bool isGood(char a,char b)
{
    if(isupper(a) && islower(b) && tolower(a)==tolower(b))
        return false;
    else if(islower(a) && isupper(b) && tolower(a)==tolower(b))
        return false;
    else
        return true;
}
string makeGood(string s) 
{
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++)
    {
        if(!st.empty() && isGood(st.top(),s[i]))
        {
            st.push(s[i]);
        } 
        else if(st.empty())
        {
            st.push(s[i]);
        } 
        else
        {
            st.pop();
        }
    }
    string str="";
    while(!st.empty())
    {
        str=str+st.top();
        st.pop();
    }
    reverse(str.begin(),str.end());
    return str;
}
int main()
{
    string s="abBAcC";
    cout<<makeGood(s);
}