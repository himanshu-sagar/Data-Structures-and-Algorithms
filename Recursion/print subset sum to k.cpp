#include <iostream>
using namespace std;
void subsetSumToK1(int arr[], int start, int size, int output[], int oSize, int k) {
    if(start == size) {
        if(k == 0) {
            for(int i = 0; i < oSize; i++) {
                cout << output[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    int out1[1000], out2[1000], smallSize1 = 0, smallSize2 = 0;
    subsetSumToK1(arr, start+1, size, output, oSize, k);
    if(k > 0) {
        int i;
        for(i = 0; i < oSize; i++) {
            out2[i] = output[i];
        }
        out2[i] = arr[start];
        subsetSumToK1(arr, start+1, size, out2, oSize+1, k-arr[start]);
    }
}
void printSubsetSumToK(int arr[], int size, int k) {
    int output[1000];
    subsetSumToK1(arr, 0, size, output, 0, k);
}

int main() {
  int arr[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> arr[i];
  cin>>k;
  printSubsetSumToK(arr, length,k);
}

