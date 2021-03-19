#include <bits/stdc++.h>
#include <climits>
using namespace std;
class StackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray(int totalSize)
    {
        data=new int[totalSize];
        nextIndex=0;
        capacity=totalSize;
    }
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        return nextIndex==0 ? true:false;
    }
    void push(int element)
    {
        if(nextIndex==capacity)
        {
            cout<<"Stack Full"<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty";
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};
int main()
{
    StackUsingArray st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(60);
    st.push(80);

    cout<<st.size()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.top()<<endl;
    cout<<st.isEmpty()<<endl;
}


