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




int findNodeRec1(Node *head, int n)
{
if (head == NULL)
{
return -1;
}
else if (head->data == n)
{
return 0;
}
int smallAns = findNodeRec(head->next, n);
if (smallAns == -1)
{
return -1;
}
return smallAns + 1;
}
int findNode(Node *head,int n,int cnt)
{
    if(head==NULL)
    {
        return -1;
    }
    if(head->data==n)
    {
        return cnt;
    }
    return findNode(head->next,n,cnt+1);
}
int findNodeRec(Node *head, int n)
{
	int cnt=0;
    cnt=findNode(head,n,cnt);
    return cnt;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int val;
		cin >> val;
		cout << findNodeRec(head, val) << endl;
	}
}
