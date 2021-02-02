#include<iostream>
using namespace std;
bool checkab(char str[],int start)
{
    if(str[start]=='\0')
    {
        return true;
    }
    if(str[start]!='a')
    {
        return false;
    }
    if(str[start+1]!='\0' && str[start+2]!='\0')
    {
        if(str[start+1]=='b' && str[start+2]=='b')
            return checkab(str,start+3);
    }
    return checkab(str,start+1);
}
bool checkAB(char str[])
{
    return checkab(str,0);
}
int main()
{
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
