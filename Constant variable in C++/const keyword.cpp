#include<iostream>
using namespace std;
int main()
{
    //constant int
    const int i=10;
    //constant reference from a non const int
    int j=9;
    const int &k=j;
    //k++  -- error
    j++;
    cout<<k<<"  "<<j;

    //constant reference from const int
    int const j2=23;
    int const &k2=j2;
    //j2++------error
    //k2++---error
    //reference fro const int
    int const p=12;
    //int & p1=p;----error
    //p1++ -----error;


    //Pointers
    //----------------------
    int const o=10;//read only
    //int * p=&i;-------error
    int const * q=&o;//read only


    int w=89;
    int const * w1=&w;
    w++;
    cout<<endl<<w<<" "<<*w1;
}
