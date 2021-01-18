#include<iostream>
using namespace std;
int main()
{
    int * p=new int;
    *p=20;
    cout<<*p<<endl;
    delete p;

    char * p1=new char;
    *p1='a';
    cout<<*p1<<endl;
    delete p1;

    int * arr=new int[20];
    delete [] arr;

    cout<<"Enter Number of elements:"<<endl;
    int n;
    cin>>n;
    int * arr1=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int max1=arr1[0];
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<"  ";
    for(int i=1;i<n;i++)
    {
        if (arr1[i]>max1)
            max1=arr1[i];
    }
    cout<<"\n Maximum Element in arr1 is: "<<max1;
    delete [] arr1;
}
