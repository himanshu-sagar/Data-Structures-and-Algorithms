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
    for(int i=0;i<n;i++)
    {
        arr2[n-i-1]=arr1[i];
    }
    return arr2;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int* arr2;
    arr2=reverseArray1(arr,6);
    for(int i=0;i<6;i++)
        cout<<arr2[i]<<"  ";

    delete[] arr2;
}
