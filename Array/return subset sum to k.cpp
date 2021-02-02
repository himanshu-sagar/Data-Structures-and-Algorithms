#include <iostream>
using namespace std;
int subsetSumToK1(int arr[], int n,int start, int output[][50], int k)
{
    if(start==n)
    {
        if(k==0)
        {
            output[0][0]=0;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int out1[1000][50],out2[1000][50];
    int ans1=subsetSumToK1(arr,n,start+1,out1,k);
    int ans2=subsetSumToK1(arr,n,start+1,out2,k-arr[start]);
    int row=0;
    for(int i=0;i<ans1;i++)
    {
        for(int j=0;j<=out1[i][0];j++)
        {
            output[row][j]=out1[i][j];
        }
        row++;
    }
    for(int i=0;i<ans2;i++)
    {
        output[row][0]=out2[i][0]+1;
        output[row][1]=arr[start];
        for(int j=1;j<=out2[i][0];j++)
        {
            output[row][j+1]=out2[i][j];
        }
        row++;
    }
    return row;
}
int subsetSumToK(int input[], int n, int output[][50], int k) {
    return subsetSumToK1(input, n, 0, output, k);
}
int main() {
  int input[20],length, output[1000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;

  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) {
	for( int j = 1; j <= output[i][0]; j++) {
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
