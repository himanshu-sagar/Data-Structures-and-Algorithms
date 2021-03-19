//bubble sort iterative
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
int length(Node* head) {
    if(head==NULL) {
        return 0;
    }
    Node* temp=head;
    int size=1+length(temp->next);
    return size;
}
Node *bubbleSort(Node *head)
{
	for(int i=0;length(head)>i;i++) { 
        Node* prev=NULL,*curr=head;
        while(curr->next!=NULL) {
            if(curr->data>curr->next->data) {
                if(prev!=NULL) {
                    Node *temp = curr -> next -> next;
                    curr -> next -> next = curr;
                    prev -> next = curr -> next;
                    curr -> next = temp;
                    prev = prev -> next;
                } 
                else{
                    head=curr->next;
                    curr->next=head->next;
                    head->next=curr;
                    prev=head;
                }
            }
            else { 
                prev=curr;
                curr=curr->next;
            }
        }
    }
    return head;
}
int main()
{
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}