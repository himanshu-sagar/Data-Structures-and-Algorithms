#include<iostream>
#include<string>
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
void printKeypadCombinations(int num,string output)
{
    if(num==0)
    {
        cout<<output<<endl;
        return;
    }

    string keyCode=keypadCode(num%10);
    for(int i=0;i<keyCode.size();i++)
    {
        printKeypadCombinations(num/10,keyCode[i]+output);
    }
}
int main()
{
    int num;
    string output="";
    cout<<"Enter a number:"<<endl;
    cin>>num;
    printKeypadCombinations(num,output);
}
