#include<bits/stdc++.h>
using namespace std;
bool match(char x,char y)
{
    if(x='(' && y==')')
        return true;
    if(x='{' && y=='}')
        return true;
    if(x='[' && y==']')
        return true;
    return false;
}
bool balancedParenthesis(string expression)
{
    stack<char> st;
    for(int i=0;i<expression.length();i++)
    {
        if(expression[i]=='(' || expression[i]=='{' || expression[i]=='[')
        {
            st.push(expression[i]);
        }
        else if(expression[i]==')' || expression[i]=='}' || expression[i]==']')
        {
            if(st.empty()==false)
            
                if(match(st.top(),expression[i]))
                {
                    st.pop();
                }
        }
    }
    if(st.empty())
    {
        return true;
    }
    else
        return false;

}
int main()
{
    string exp="(a*{3*(b+c)})";
    cout<<balancedParenthesis(exp);
}