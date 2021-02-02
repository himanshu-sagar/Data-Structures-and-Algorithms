#include<iostream>
using namespace std;

void replaceCharacter(char str[], char c1, char c2)
{
    if(str[0]=='\0')
    {
        return;
    }
    if(str[0]!=c1)
    {
        replaceCharacter(str+1,c1,c2);
    }
    else
    {
        str[0]=c2;
        replaceCharacter(str+1,c1,c2);
    }
}
int main()
{
    char str[20]="helloWorld";
    char c1='l';
    char c2='n';
    replaceCharacter(str,c1,c2);
    cout<<str;
}
