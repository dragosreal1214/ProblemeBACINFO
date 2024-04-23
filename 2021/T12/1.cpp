#include<iostream>
using namespace std;
void frate(int x, int &y);
int main()
{
    int m = 0;
    frate(2138, m);
    cout << m;
}
void frate(int x, int &y)
{
    int p = 1;
    while(x)
    {   
        y = y + (x % 10 + 1) * p;
        x /= 10;
        if(x % 10 + 1 == 0)
            x++;
        p *= 10;
    }
    int cy = y;
    while(cy > 9)
    {
        cy /= 10;
    }
    if(cy == 1)
    {
        y = -1;
    }
}