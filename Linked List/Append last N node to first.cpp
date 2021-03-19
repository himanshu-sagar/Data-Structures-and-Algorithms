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


Node *appendLastNToFirst1(Node *head, int n)
{
    //Write your code here
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    while(n>0)
    {
        Node *temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        Node *tempLast=temp->next;
        temp->next=NULL;
        tempLast->next=head;
        head=tempLast;
        n--;
    }
    return head;
}

Node *appendLastNToFirst(Node *head, int n)
{
    if(head==NULL || head->next==NULL || n==0)
    {
        return head;
    }
    int len=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }

	int cnt=len-n;
    temp=head;
    Node *oldhead=head;
    while(cnt>1)
    {
        temp=temp->next;
        cnt--;
    }

    head=temp->next;

    temp->next=NULL;
    Node *temphead=head;
    while(temphead->next!=NULL)
    {
        temphead=temphead->next;
    }

    temphead->next=oldhead;

    return head;
}

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
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}
