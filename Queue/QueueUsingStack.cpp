#include<bits/stdc++.h>
using namespace std;
class QueueUsingStack
{
    public:
    stack<int> s1,s2;
    int size;
    QueueUsingStack()
    {
        size=0;
    }
    void push(int x)
    {
        while(!s1.empty())
        {
            int temp=s1.top();
            s2.push(temp);s1.pop(); 
        }
        s2.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());s2.pop();
        }
        size++;
    }
    int pop()
    {
        if(!s1.empty())
        {
            size--;
            int temp=s1.top();s1.pop();
            return temp;
        }
        else
            return 0;
    }
    int front()
    {
        if(!s1.empty())
        {
            int temp=s1.top();
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
    QueueUsingStack q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.front()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    
    cout<<q.size<<endl;
}