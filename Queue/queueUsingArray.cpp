#include<bits/stdc++.h>
using namespace std;
template <typename T>
class QueueUsingArr
{
    public:
    T *data;
    int firstIndex,nextIndex;
    int size;
    int capacity;
    QueueUsingArr(int s)
    {
        data=new T[s];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=s;
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
        if(size==capacity)
        {
            cout<<"Queue Full";
            return;
        }
        data[nextIndex]=element;
        nextIndex=(nextIndex+1)%capacity;
        size++;
        if(firstIndex==-1)
        {
            firstIndex=0;
        }
    }
    T dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue Empty";
            return 0;
        }
        T ans=data[firstIndex];
        firstIndex=(firstIndex+1)%capacity;
        size--;
        if(size==0)
        {
            firstIndex=-1;
            nextIndex=0;
        }
        return ans;
    }
    T front()
    {
        if(isEmpty())
        {
            cout<<"Queue Empty";
            return 0;
        }
        return data[firstIndex];
    }

};
int main()
{
    QueueUsingArr<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.getSize()<<endl;
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;

}