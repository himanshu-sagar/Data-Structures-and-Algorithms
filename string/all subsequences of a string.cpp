#include<iostream>
#include <cmath>
using namespace std;
int subsequence(string str,string output[])
{
    if(str.empty())
    {
        output[0]="";
        return 1;
    }
    string subst=str.substr(1);
    int n=subsequence(subst,output);
    for(int i=0;i<n;i++)
    {
        output[n+i]=str[0]+output[i];
    }
    return 2*n;
}
int main()
{
    string str;
    cout<<"Enter A String: "<<endl;
    cin>>str;
    int n=str.size();
    n=pow(2,n);
    string* output=new string[n];
    n=subsequence(str,output);
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<endl;
    }
}
