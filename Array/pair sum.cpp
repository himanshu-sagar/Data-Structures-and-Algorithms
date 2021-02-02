#include <iostream>
#include <algorithm>
using namespace std;
int pairSum(int *arr, int n, int num)
{
sort(arr, arr + n);
int startIndex = 0;
int endIndex = n - 1;
int numPairs = 0;
while (startIndex < endIndex)
{
if (arr[startIndex] + arr[endIndex] < num)
{
startIndex++;
}
else if (arr[startIndex] + arr[endIndex] > num)
{
endIndex--;
}
else
{
int elementAtStart = arr[startIndex];
int elementAtEnd = arr[endIndex];
if (elementAtStart == elementAtEnd)
{
int totalElementsFromStartToEnd = (endIndex - startIndex) + 1;
numPairs += (totalElementsFromStartToEnd * (totalElementsFromStartToEnd - 1) / 2);
return numPairs;
}
int tempStartIndex = startIndex + 1;
int tempEndIndex = endIndex - 1;
while (tempStartIndex <= tempEndIndex && arr[tempStartIndex] == elementAtStart)
{
tempStartIndex += 1;
}
while (tempEndIndex >= tempStartIndex && arr[tempEndIndex] == elementAtEnd)
{
tempEndIndex -= 1;
}
int totalElementsFromStart = (tempStartIndex - startIndex);
int totalElementsFromEnd = (endIndex - tempEndIndex);
numPairs += (totalElementsFromStart * totalElementsFromEnd);
startIndex = tempStartIndex;
endIndex = tempEndIndex;
}
}
return numPairs;
}
int pairSum(int arr[], int n, int sum) {

    int i,j,p=0;
   for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n;j++){
            if(i!=j){
                if((arr[i] + arr[j]) == sum){
                    if(arr[i] < arr[j]){
                        p++;

                    }
                    else{
                        p++;
                    }
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

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
