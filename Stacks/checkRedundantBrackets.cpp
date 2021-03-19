#include <iostream>
#include <string>
using namespace std;
#include<stack>
int count(stack<char> &st)
{
    int cnt=0;
    
    while(st.top()!='(')
    {
        st.pop();
        cnt++;
        if(st.empty())
            break;        
    }
    return cnt;
}
bool checkRedundantBrackets(const string expression) 
{
    stack<char> st;
    int i=0;
    int n=expression.size();
    while(n--)
    {
        if(expression[i]!=')')
            st.push(expression[i]);
        else if(expression[i]==')' )
        {
            int cnt=count(st);
            if(cnt>1 && !st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
                return true;
        }
        
        i++;
    }
    return false;
    

}

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}