#include<bits/stdc++.h>
using namespace std;

class StackUsingQueue
{
    public:
    queue<int> q1;
    queue<int> q2;
    int size;
    StackUsingQueue()
    {
        size=0;
    }
    void push(int x)
    {
        q2.push(x);
        size++;
        while(!q1.empty())
        {
            int temp=q1.front();q1.pop();
            q2.push(temp);
        }

        queue<int> q=q1;
        q1=q2;
        q2=q;
    }
    int pop()
    {
        if(!q1.empty())
        {
            int temp=q1.front();q1.pop();size--;
            return temp;
        }
        else
            return 0;
    }
    int top()
    {
        if(!q1.empty())
        {
            int temp=q1.front();
            return temp;
        }
        else
            return 0;
    }
    bool empty()
    {
        return size==0;
    }
};
int main()
{
    StackUsingQueue st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.size<<endl;
}