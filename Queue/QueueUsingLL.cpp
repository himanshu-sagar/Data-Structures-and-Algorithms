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
        next=NULL;
    }
};

template <typename T>
class Queue
{
    Node<T> *head;
    Node<T> *tail;
    int size;
    public:
    Queue()
    {
        head=NULL;
        tail=NULL;
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
    void enqueue(T element)
    {
        Node<T> *newnode=new Node<T>(element);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        tail->next=newnode;
        tail=newnode;
        size++;
    }
    T front()
    {
        if(head==NULL)
        {
            cout<<"Queue is Empty"<<endl;
            return 0;
        }
        return head->data;
    }
    T dequeue()
    {
        if(head==NULL)
        {
            cout<<"Queue is Empty"<<endl;
            return 0;
        }
        int tempdata=head->data;
        Node<T> *tempnode=head;
        head=head->next;
        delete tempnode;
        size--;
        return tempdata;
    }
};
int main()
{
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
    return 0;
}