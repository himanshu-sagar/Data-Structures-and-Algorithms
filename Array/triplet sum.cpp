#include <iostream>
#include <algorithm>
using namespace std;

int tripletSum(int *arr, int n, int num)
{
    int p=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            for(int k=0;k<n-2;k++)
            {
                if(arr[i]+arr[j]+arr[k]==num)
                {
                    p++;
                }
            }
        }
    }
    return p;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
