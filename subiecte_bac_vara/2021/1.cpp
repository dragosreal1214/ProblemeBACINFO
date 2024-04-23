#include<iostream>
using namespace std;
void divPrim(int n, int &s);
int main()
{
    int a;
    divPrim(360, a);
    cout << a;
}
void divPrim(int n, int &s)
{
    s = 0;
    int d = 2;
    while(d * d <= n)
    {
        int m = 0;
        while(n % d == 0)
        {
            m++;
            n /= d;
        }
        if(m % 2 == 1)
        {
            s += d;
        }
        d++;
    }
    if(n > 1)
    {
        s += n;
    }
}
