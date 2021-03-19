#include<bits/stdc++.h>
#include <string> 
using namespace std;
int solve(int a,int b,char p)
{
    if(p=='+')
        return b+a;
    else if(p=='-')
        return b-a;
    else if(p=='*')
        return b*a;
    else
        return b/a;
}
int calculator(string expression)
{
    stack<char> st;
    int n=expression.length();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(expression[i]!='(')
        {
            st.push(expression[i]);
        }
        else if(expression[i]=='(')
        {
            while(st.top()!=')')
            {
                char a=st.top();
                if(a=='+')
                {
                    
                }
                else if(a=='-')
                {

                }
                sum+=(int)(st.top());st.pop();
            }
        }
    }
    return sum;
}
int main()
{
    string expression="(7+(6+8)+4)";
    cout<<calculator(expression);
}