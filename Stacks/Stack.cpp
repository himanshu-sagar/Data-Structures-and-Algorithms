#include <bits/stdc++.h>
#include <climits>
using namespace std;
template <typename T>
class Stack
{
    T *data;
    int nextIndex;
    int capacity;
    public:
    Stack()
    {
        data=new T[4];
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
            T *newData=new T[2*capacity];
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
    T pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty";
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty";
            return 0;
        }
        return data[nextIndex-1];
    }
};
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