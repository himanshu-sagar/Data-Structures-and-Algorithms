#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;
TreeNode<int> *takeInput()
{
    int rootData;
    cout<<"Enter data: ";
    cin>>rootData;
    TreeNode<int> *root=new TreeNode<int>(rootData);
    int n;
    cout<<"Enter Number Of children of "<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int> *child=takeInput();
        root->children.push_back(child);
    }
    return root;
}
TreeNode<int> * takeInputLevelwise()
{
    int rootData;
    cout<<"Enter root data: ";
    cin>>rootData;
    TreeNode<int> *root=new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0)
    {
        TreeNode<int> *front =pendingNodes.front();pendingNodes.pop();
        cout<<"Enter Number of Children of "<<front->data<<endl;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int childData;
            cout<<"Enter "<<i<<"th child of "<< front->data<<endl;
            cin>>childData;
            TreeNode<int> *child=new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(TreeNode<int> *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" , ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}
void printLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int> *> q;
    q.push(root);
    
    while(!q.empty())
    {
        TreeNode<int> *front=q.front();q.pop();
        cout<<front->data<<": ";
        int n=front->children.size();
        for(int i=0;i<n;i++)
        {
            cout<<front->children.at(i)->data<<"  ";
            q.push(front->children.at(i));
        }
        cout<<endl;
    }
}
int countNodes(TreeNode<int> *root)
{
    int cnt=1;
    for(int i=0;i<root->children.size();i++)
    {
        cnt+=countNodes(root->children.at(i));
    }
    return cnt;
}
int sumOfNodes(TreeNode<int>* root) {
    int sum=root->data;
    for(int i=0;i<root->children.size();i++)
    {
        int p=sumOfNodes(root->children.at(i));
        sum+=p;
    }
    return sum;
}
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    if(root==NULL)
    {
        return NULL;
    }
    TreeNode<int> *maxNode=root;
    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int> *temp=maxDataNode(root->children.at(i));
        if(maxNode->data<temp->data)
        {
            maxNode=temp;
        }
    }
    return maxNode;
}
int getHeight(TreeNode<int>* root) {
    int max1=0;
    if(root->children.size()==0)
    {
        return 1;
    }
    for(int i=0;i<root->children.size();i++)
    {
        max1=max(getHeight(root->children.at(i)),max1);
    }
    return 1+max1;
}
void printAtLevelK(TreeNode<int> *root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<"  ";
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
        printAtLevelK(root->children.at(i),k-1);
    }
}
int main()
{
    /*
    TreeNode<int>* root=new TreeNode<int>(10);
    TreeNode<int>* node1=new TreeNode<int>(20);
    TreeNode<int>* node2=new TreeNode<int>(30);

    root->children.push_back(node1);
    root->children.push_back(node2);
    */
    TreeNode<int>* root=takeInputLevelwise();
    printLevelWise(root);
    cout<<"Number of Nodes in Tree: "<<countNodes(root)<<endl;
    cout<<"Sum of Nodes in Tree: "<<sumOfNodes(root)<<endl;
    cout<<"Maximum element in Tree: "<<maxDataNode(root)->data<<endl;
    cout<<"Height of the Tree: "<<getHeight(root)<<endl;
    cout<<"Nodes At level K: ";
    printAtLevelK(root,2);
}