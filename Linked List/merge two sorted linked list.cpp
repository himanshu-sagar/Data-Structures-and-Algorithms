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
Node *mergeTwoSortedLinkedLists(Node *h1, Node *h2)
{
    //Write your code here
    Node* finalhead=NULL;
    Node* finaltail=NULL;
    /*
    if(h1==NULL || h2==NULL)
    {
        if(h1==NULL && h2!=NULL)
        {
            return h2;
        }
        else if(h1!=NULL && h2==NULL)
        {
            return h1;
        }
        else
        	return h1;
    }
    */
    if(h1==NULL)
        return h2;
    if(h2==NULL)
        return h1;
    if(h1->data<=h2->data)
        {
            finalhead=h1;
            finaltail=h1;
        	h1=h1->next;
        }
        else
        {
            finalhead=h2;
            finaltail=h2;
            h2=h2->next;
        }
    while(h1!=NULL && h2!=NULL)
    {
        if(h1->data<=h2->data)
        {
            finaltail->next=h1;
            finaltail=h1;
            h1=h1->next;
        }
        else
        {
            finaltail->next=h2;
            finaltail=h2;
            h2=h2->next;
        }
    }
    if(h1==NULL)
    {
        finaltail->next=h2;
    }
    else
    {
        finaltail->next=h1;
    }
    return finalhead;
}



Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
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
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}