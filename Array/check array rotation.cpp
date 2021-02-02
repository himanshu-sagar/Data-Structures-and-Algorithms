#include <iostream>
using namespace std;

int arrayRotateCheck(int *arr, int n)
{
    if(n==0)
    {return 0;}
    int min=arr[0],mini;
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            mini=i;
        }
    }
    return mini;
}
int arrayRotateCheck1(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return i;
        }
    }
}

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}

	return 0;
}
