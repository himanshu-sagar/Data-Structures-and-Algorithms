#include <iostream>

using namespace std;
int bsearch(int arr[],int key,int start,int last)
{
    if(start<=last)
    {
        int mid=start+(last-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            return bsearch(arr,key,start,mid-1);
        }
        else if(arr[mid]<key)
        {
            return bsearch(arr,key,mid+1,last);
        }
    }
    return -1;
}
int binarySearch(int input[], int size, int element)
{
    return bsearch(input,element,0,size-1);
}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    {
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
