#include<iostream>
#include <algorithm>
using namespace std;
bool checkSorted(int arr[],int n)
{
    if(n==0 || n==1)
        return true;

    if(arr[0]>arr[1])
    {
        return false;
    }

    bool out= checkSorted(arr+1,n-1);
    return out;


}


int main()
{
    int arr[5]={1,9,3,4,5};

    cout<<checkSorted(arr,5);

}
