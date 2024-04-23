#include<iostream>
using namespace std;
int cifreImpare(int n)
{
    int nr = 0, p = 1;
    while(n)
    {
        if(n % 10 % 2 == 0)
        {
            nr = (n % 10) * p + nr;
            p *= 10;
        }
        n /= 10;
    }
    if(nr)
    {
        return nr;
    }
    else
    {
        return -1;
    }
}
int main()
{
    cout << cifreImpare(23541);
}