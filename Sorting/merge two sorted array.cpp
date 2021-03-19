#include<iostream>
using namespace std;
void mergeTwoSortedArr(int temp1[],int temp2[],int temp3[],int n1,int n2)
{

    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if (temp1[i]<temp2[j])
        {
            temp3[k]=temp1[i];
            k++;
            i++;
        }
        else
        {
            temp3[k]=temp2[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        temp3[k]=temp1[i];
        k++;
        i++;
    }

    while(j<n2)
    {
        temp3[k]=temp2[j];
        k++;
        j++;
    }
}
void mergeTwoSortedArr1(int arr[],int si,int mid,int ei)
{
    int n1=mid-si+1;
    int n2=ei-mid;
    int temp1[n1],temp2[n2];

    for (int p = 0; p < n1; p++)
        temp1[p] = arr[si + p];
    for (int q = 0; q < n2; q++)
        temp2[q] = arr[mid + 1 + q];

    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(temp1[i]<=temp2[j])
        {
            arr[k]=temp1[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=temp2[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        arr[k]=temp1[i];
        k++;
        i++;
    }

    while(j<n2)
    {
        arr[k]=temp2[j];
        k++;
        j++;
    }
}
int main()
{
    int a[5]={0,0,0,0,0};
    int b[7]={-1,0,0,0,0,0,1};
    int c[12];
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    mergeTwoSortedArr(a,b,c,n1,n2);

    for(int i=0;i<12;i++)
    {
        cout<<c[i]<<"  ";
    }
}

