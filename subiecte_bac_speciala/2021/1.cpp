#include <iostream>

using namespace std;

int oglindite(int a);
void imog(int x, int y, int &rez);

int main()
{
    int a;
    imog(86, 40, a);
    cout << a;
}

int oglindite(int a)
{
    int nr = 0;
    while(a)
    {
        nr = nr * 10 + a % 10;
        a /= 10;
    }
    return nr;
}

void imog(int x, int y, int &rez)
{
    int nrx = 0, nry = 0;
    while(x)
    {
        if(x % 10 % 2 == 1)
            nrx = nrx * 10 + x % 10;
        x /= 10;
    }
    while(y)
    {
        if(y % 10 % 2 == 1)
            nry = nry * 10 + y % 10;
        y /= 10;
    } 
    if(nrx == oglindite(nry) && nrx != 0)
        rez = 1;
    else
        rez = 0;
}