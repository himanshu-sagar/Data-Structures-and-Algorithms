#include <iostream>
using namespace std;
int subset(int arr[], int n, int output[][20])
{
    if(n<=0)
    {
        output[0][0]=0;
        return 1;
    }
    int ans=subset(arr+1,n-1,output);
    for(int i=0;i<ans;i++)
    {
        int a=output[i][0]+1;
        output[ans+i][0]=a;
        output[ans+i][1]=arr[0];
        for(int j=2;j<a+1;j++)
        {
            output[ans+i][j]=output[i][j-1];
        }
    }
    return ans*2;
}

int main()
{
  int input[20],length, output[358][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) {
	for( int j = 1; j <= output[i][0]; j++) {
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
