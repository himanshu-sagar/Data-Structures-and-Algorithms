#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
/*
Node *swapNodes(Node *head, int i, int j)
{
	if(head==NULL && head->next==NULL)
    {
        return head;
    }
    int cnt=0;
    Node *temp1,*temp2,*temp;
    temp=head;
    while(temp->next!=NULL)
    {
        if(cnt==i)
        {
            temp1=temp;
        }
        if(cnt==j-1)
        {
            temp2=temp->next;
            temp1->next=temp->next;
            temp->next=temp1;
        }
        temp=temp->next;
        cnt++;
    }
    for(int p=0;p<i-1;p++)
    {
        temp2->next=temp->next->next;
        temp=temp2;
    }
    return head;
}
*/
Node *swapNodes(Node *head, int i, int j)
{
	Node *temp=head,*prev=NULL;
	Node *curr1=head,*prev1=NULL,*curr2=head,*prev2=NULL;
	int cnt=0;
	if(head==NULL && head->next==NULL)
    {
        return head;
    }
	while (temp!=NULL)
	{
		if(cnt==i)
		{
			prev1=prev;
			curr1=temp;
		}
		else if(cnt==j)
		{
			prev2=prev;
			curr2=temp;
		}
		cnt++;
		prev=temp;
		temp=temp->next;
	}
	if(prev1!=NULL)
	{
		prev1->next=curr2;
	}
	else
	{
		head=curr2;
	}
	if(prev2!=NULL)
	{
		prev2->next=curr1;
	}
	else
	{
		head=curr1;
	}
	Node *temp1=curr2->next;
	curr2->next=curr1->next;
	curr1->next=temp1;
	return head;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}
