#include<iostream>
using namespace std;
void divPrimMax(int n, int &p);
int main()
{
    int a = 0;
    divPrimMax(2000, a);
    cout << a;
}
void divPrimMax(int n, int &p)
{
    int d = 2;
    p = 0;
    while(d * d <= n)
    {
        int m = 0;
        while(n % d == 0)
        {
            m++;
            n /= d;
        }
        if(m > 0 && d > p)
        {
            p = d;
        }
        d++;
    }
}