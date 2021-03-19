#include <iostream>
#include<stack>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};



Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeinput();
    
    head = NextLargeNumber(head);
    print(head);
    return 0;
}





Node* NextLargeNumber(Node *head) {
    stack<Node *> st;
    Node *temp=head;
    while(temp!=NULL)
    {
        st.push(temp);
        temp=temp->next;
    }
    int carry=0;
    bool flag=false;
    temp=NULL;
    while(!st.empty())
    {
        Node *top=st.top();st.pop();
        if(flag==false)
        {
            int a=top->data;
            a+=1;
            flag==true;
            if(a==10)
            {
                top->data=0;
                carry=1;
            }
            else
            {
                top->data=a;
            }
            	
        }
        int a=top->data;
        a+=carry;
        carry=0;
        if(a==10)
        {
            top->data=0;
            carry=1;
        }
        else
        {
            top->data=a;
        }
        if(temp==NULL)
        {
            temp=top;
        }
        else
        {
            top->next=temp;
            temp=top;
        }
    }
    if(carry==1)
    {
        Node *newnode=new Node(1);
        newnode->next=temp;
        temp=newnode;
    }
    return temp;
}


