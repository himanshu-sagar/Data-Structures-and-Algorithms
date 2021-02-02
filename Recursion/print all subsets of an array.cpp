#include <iostream>
using namespace std;
void Psubset(int arr[],int n,int output[],int m)
{
    if(n<=0)
    {
        for(int i=0;i<m;i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    Psubset(arr+1,n-1,output,m);
    int out[m];
    int i=0;
    for(;i<m;i++)
    {
        out[i]=output[i];
    }
    out[m]=arr[0];
    Psubset(arr+1,n-1,out,m+1);
}
void printSubsetsOfArray(int input[], int size)
{
    int output[size];
    Psubset(input,size,output,0);
}


int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
