#include<iostream>
using namespace std;
void printSubsequences(string str,string output)
{
    if(str.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    printSubsequences(str.substr(1),output);
    printSubsequences(str.substr(1),output+str[0]);
}
int main()
{
    cout<<"Enter a String: "<<endl;
    string str;
    cin>>str;
    string output="";
    printSubsequences(str,output);
}
