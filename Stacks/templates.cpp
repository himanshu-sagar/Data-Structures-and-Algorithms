#include<bits/stdc++.h>
using namespace std;

template <typename T, typename V>
class Pair
{
    T x;
    V y;
    public:
    void setX(T x)
    {
        this->x=x;
    }
    void setY(T y)
    {
        this->y=y;
    }
    T getX()
    {
        return x;
    }
    V getY()
    {
        return y;
    }
};
int main()
{
    /*
    Pair<int,int> p1;
    p1.setX(10);
    p1.setY(20);
    cout<<p1.getX()<<"  "<<p1.getY()<<endl;;
    Pair<double,char> p2;
    p2.setX(10.5);
    p2.setY('s');
    cout<<p2.getX()<<"  "<<p2.getY();
    */
    Pair<Pair<int,int> , int> p3;
    
    Pair<int,int> p4;
    p4.setX(10);
    p4.setY(20);

    p3.setX(p4);

    cout<<p3.getX().getX()<<"  "<<p3.getX().getY();
}



