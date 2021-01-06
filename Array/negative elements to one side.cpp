#include<iostream>
using namespace std;

int* NegativeTo_1_Side(int arr[],int n)
{
    int j = 0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]<0)
        {
            if (i!=j)
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            j++;
        }
    }
    return arr;
}

int* NegativeTo_1_Side1(int arr[],int n)
{
    int left=0,right=n-1;
    while(left<=right)
    {
        if ((arr[left]<0) && (arr[right]<0))
        {
            left++;
        }
        else if((arr[left]>0) && (arr[right]<0))
        {
            int temp;
            temp=arr[left];
            arr[right]=temp;
            left++;
            right--;
        }
        else if((arr[left]>0) && (arr[right]>0))
        {
            right--;
        }
        else
        {
            left += 1;
            right -= 1;
        }
    }

    return arr;
}



int main()
{
    int arr[6]={-1,2,4,5,-66,-45};
    int* arr1;
    int* arr2;
    arr1=NegativeTo_1_Side(arr,6);
    arr2=NegativeTo_1_Side1(arr,6);
    cout<<"Using Quick Sort partitioning method: "<<endl;
    for(int i=0;i<6;i++)
        cout<<arr1[i]<<"   ";

    cout<<endl<<"Using Two pointer method: "<<endl;
    for(int i=0;i<6;i++)
        cout<<arr2[i]<<"   ";
}
