#include<iostream>
using namespace std;
void imog(int x, int y, int &rez);
int main()
{
    int rez = 0;
    imog(523, 84356, rez);
    cout << rez;
}
void imog(int x, int y, int &rez)
{
    int nrx = 0;
    int nry = 0;
    int p = 1;
    while(x)
    {
        if(x % 10 % 2 == 1)
        {
            nrx = nrx + (x % 10) * p;
            p = p * 10;
        }
        x /= 10;
    }
    p = 1;
    while(y)
    {
        if(y % 10 % 2 == 1)
        {
            nry = nry + (y % 10) * p;
            p = p * 10;
        }
        y /= 10;
    }
    int ogl = 0;
    while(nry)
    {
        ogl = ogl * 10 + nry % 10;
        nry /= 10;
    }
    if(nrx == ogl)
    {
        rez = 1;
    }
    else
    {
        rez = 0;
    }

}