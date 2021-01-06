#include<iostream>
using namespace std;
int* reverseArray1(int arr1[],int n)
{

    int* arr2=new int[n];
    for(int i=0;i<n;i++)
    {
        arr2[n-i-1]=arr1[i];
    }
    return arr2;
}

int* reverseArray2(int arr1[],int n)
{
    int* arr2=new int[n];
    arr2=arr1;
    int left=0;
    int right=n-1;
    while(left<right)
    {
        int temp;
        temp=arr2[left];
        arr2[left]=arr2[right];
        arr2[right]=temp;

        left+=1;
        right-=1;
    }
    return arr1;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int* arr2;
    int* arr3;
    arr2=reverseArray1(arr,6);
    arr3=reverseArray2(arr,6);
    cout<<"Naive: ";
    for(int i=0;i<6;i++)
        cout<<arr2[i]<<"  ";
    cout<<endl;
    cout<<"Optimized: ";
    for(int i=0;i<6;i++)
        cout<<arr3[i]<<"  ";

    delete[] arr2;
}
