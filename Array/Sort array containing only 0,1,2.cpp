#include<iostream>
using namespace std;
int* sort012(int arr[],int n)
{
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]==0)
                c0++;
        else if (arr[i]==1)
                c1++;
        else c2++;
    }
    int i=0;
    while(c0>0)
    {
        arr[i]=0;
        i++;
        c0--;
    }
    while(c1>0)
    {
        arr[i]=1;
        c1--;
        i++;
    }
    while(c2>0)
    {
        arr[i]=2;
        c2--;
        i++;
    }

    return arr;
}
int main()
{
    int arr[6]={1,2,0,1,1,2};
    int* arr1;
    arr1=sort012(arr,6);
    for(int i=0;i<6;i++)
        cout<<arr1[i]<<" ";

}
