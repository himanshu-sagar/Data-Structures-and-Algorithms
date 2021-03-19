#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"  ";
        head=head->next;
    }
    cout<<endl;
}
Node *takeInput()//O(n^2)
{
    int data;
    cin>>data;
    Node *head=NULL;
    while(data!=-1)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            Node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}
Node *takeInput1()//O(n)
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
Node* insertNode(Node *head,int i,int data)
{
    Node *newnode=new Node(data);
    int n=0;
    Node *temp=head;
    if(i==0)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(temp !=NULL && n<i-1)
    {
        temp=temp->next;
        n++;
    }
    if(temp!=NULL)
    {
        /*
        Node *temp1=temp->next;
        temp->next=newnode;
        temp->next->next=temp1;
        */
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}
Node *insertNodeR(Node *head,int i,int data)
{
    if(head==NULL && i>0)
    {
        return head;
    }
    if(i==0)
    {
        Node *newnode=new Node(data);
        newnode->next=head;
        return newnode;
    }
    Node *temp=insertNodeR(head->next,i-1,data);
    head->next=temp;
    return head;
}
Node* deleteNode(Node *head,int i)
{
    Node *temp=head;
    int n=0;
    if(i==0)
    {
        temp=head->next;
        delete head;
        return temp;
    }
    while(temp->next!=NULL && n<i-1)
    {
        temp=temp->next;
        n++;
    }
    if(temp->next!=NULL)
    {
        Node *temp1=temp->next;
        temp->next=temp1->next;
        delete temp1;
    }
    return head;
}
Node* deleteNodeR(Node *head,int i)
{
    if(head==NULL)
    {
        return head;
    }
    if(i==0)
    {
        Node *temp=head->next;
        delete head;
        return temp;
    }
    Node *temp=deleteNodeR(head->next,i-1);
    head->next=temp;
    return head;
}

int main()
{
    Node n1(10);
    Node *head=&n1;

    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(50);

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    cout<<head->data<<" "<<head->next->data<<" "<<head->next->next->next<<endl;

    Node *temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
    print(head);

    Node *head1=takeInput1();
    print(head1);

    cout<<endl;

    head1=insertNodeR(head1,2,44);
    print(head1);

    head1=deleteNodeR(head1,1);
    print(head1);
}
