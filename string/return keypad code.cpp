#include<iostream>
#include<cmath>
using namespace std;
string keypadCode(int n)
{
    switch(n)
    {
    case 0: return "";
        break;
    case 1: return "";
        break;
    case 2: return "abc";
        break;
    case 3: return "def";
        break;
    case 4: return "ghi";
        break;
    case 5: return "jkl";
        break;
    case 6: return "mno";
        break;
    case 7: return "pqrs";
        break;
    case 8: return "tuv";
        break;
    case 9: return "wxyz";
        break;
    default: return "";
        break;
    }
}
int keypad(int n,string output[])
{
    if(n==0)
    {
        output[0]="";
        return 1;
    }

    string keyCode=keypadCode(n%10);
    int ans=keypad(n/10,output);
    int keylen=keyCode.size();
    int x=ans*keylen;
    for(int i=0;i<x;i++)
    {

        output[ans+i]=output[i%ans];

    }
    int p=0;
    for(int i=0;i<keylen;i++)
    {
        for(;p<ans*(i+1);p++)
        {
            output[p]=output[p]+keyCode[i];
        }
    }
    return ans*keylen;
}
int main()
{
    int num=323;
    int n=3;
    n=pow(n,n);
    string* output=new string[50];
    int p=keypad(num,output);
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<endl;
    }
}
