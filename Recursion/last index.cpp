#include<iostream>
using namespace std;
int lastIndex(int arr[],int n,int p)
{
    if(n<=0)
    {
        cout<<"b"<<"  ";
        return -1;
    }
    int out=lastIndex(arr+1,n-1,p);

    if (out!=-1)
    {
        cout<<out+1<<"  ";
        return out+1;
    }
    else
        {
            if(arr[0]==p)

            {
                cout<<-1<<"  ";
                return 0;
            }
            else
            {
                cout<<"a"<<"  ";
                return -1;
            }
        }

}
int main()
{
    int arr[8]={4,7,5,1,2,3,2,5};
    cout<<lastIndex(arr,8,4);
}
