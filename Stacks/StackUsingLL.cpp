#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
    public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data=data;
        this->next=NULL;
    }
};
template <typename T>
class Stack
{
    Node<T> *head;
    int size;
    public:
    Stack()
    {
        head=NULL;
        size=0;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
    void push(int elements)
    {
        Node<T> *newnode=new Node<T>(elements);
        if(head==NULL)
        {
            head=newnode;
            size++;
            return;
        }
        newnode->next=head;
        head=newnode;
        size++;
    }
    T pop()
    {
        if(head==NULL)
        {
            cout<<"Stack is Empty, Can not perform POP operation\n";
        }
        else
        {
            T temp=head->data;
            Node<T> *tempnode=head;
            head=head->next;
            delete tempnode;
            size--;
            return temp;
        }
        return 0;
    }
    int top()
    {
        if(head==NULL)
        {
            cout<<"Stack is Empty, Can not perform TOP operation\n";
        }
        else
            return head->data;

        return 0;
    }
};


int main()
{
    Stack<int> st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(12);
    st1.push(23);
    st1.push(34);
    cout<<st1.getSize()<<endl;
    cout<<st1.top()<<endl;
    cout<<st1.pop()<<endl;
    cout<<st1.top()<<endl;
    
}