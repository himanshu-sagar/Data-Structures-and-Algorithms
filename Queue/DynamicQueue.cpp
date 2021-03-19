#include<bits/stdc++.h>
using namespace std;
template <typename T>
class DynamicQueue
{
    public:
    T *data;
    int firstIndex,nextIndex;
    int size;
    int capacity;
    DynamicQueue()
    {
        data=new T[4];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=4;
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
            T *newdata=new T[2*capacity];
            int j=0;
            for(int i=firstIndex;i<capacity;i++)
            {
                newdata[j]=data[i];
                j++;
            }
            for(int i=0;i<firstIndex;i++)
            {
                newdata[j]=data[i];
                j++;
            }
            delete []data;
            data=newdata;
            firstIndex=0;
            nextIndex=capacity;
            capacity*=2;
        }
        data[nextIndex]=element;
        nextIndex=(nextIndex+1)%capacity;
        if(firstIndex==-1)
        {
            firstIndex=0;
        }
        size++;
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
    DynamicQueue<int> q;
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