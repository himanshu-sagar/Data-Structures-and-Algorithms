#include <bits/stdc++.h>
#include <climits>
using namespace std;
class StackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray()
    {
        data=new int[4];
        nextIndex=0;
        capacity=4;
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
            int *newData=new int[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                newData[i]=data[i];
            }
            capacity*=2;
            delete [] data;
            data=newData;
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
    StackUsingArray st;
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
}