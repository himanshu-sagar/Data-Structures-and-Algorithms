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

Node* ReverseLL(Node* head)
{
    Node *prev=NULL;
    Node *curr=head;
    while(curr!=NULL)
    {
        Node *tempnext=curr->next;
        curr->next=prev;
        prev=curr;
        curr=tempnext;
    }
    head=prev;
    return head;
}

void printReverse(Node *head)
{
    //Write your code here
    if(head==NULL)
    {
        return;
    }

    printReverse(head->next);
    cout<<head->data<<" ";
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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		printReverse(head);
		cout << endl;
		Node *head1=ReverseLL(head);
        while(head1!=NULL)
        {
            cout<<head1->data<<" ";
            head1=head1->next;
        }
	}



	return 0;
}
