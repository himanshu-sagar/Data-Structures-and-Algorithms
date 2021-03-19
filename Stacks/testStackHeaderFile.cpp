#include<bits/stdc++.h>
#include "Stack.h"

using namespace std;
int main()
{
    Stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(60);
    st.push(80);
    st.push(120);
    st.push(130);
    st.push(180);

    cout<<st.size()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.top()<<endl;
    cout<<st.isEmpty()<<endl;

    Stack<char> st1;
    st1.push('a');
    st1.push('b');
    st1.push('c');
    st1.push('d');
    st1.push('e');
    cout<<st1.size()<<endl;
    cout<<st1.pop()<<endl;
    cout<<st1.top()<<endl;
    cout<<st1.isEmpty()<<endl;
}