#include<iostream>
using namespace std;
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int max(int x,int y,int z)
{
    if (x>y && x>z)
        return x;
    else if(y>x && y>z)
    {
        return y;
    }
    else
        return z;
}
int main()
{
    cout<<max(99.77,0)<<" "<<max(55,66,33);
}
