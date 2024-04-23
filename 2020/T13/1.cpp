#include<iostream>
using namespace std;
void putere(int n, int &d, int &p);
int main()
{
    int a = 0, b = 0;
    putere(10780, a, b);
    cout << a <<" " << b;
}
void putere(int n, int &d, int &p)
{
    d = 0;
    p = 9999999;
    int i = 2;
    while(i * i <= n)
    {
        int m = 0;
        while(n % i == 0)
        {
            m++;
            n /= i;
        }
        if(m > 0)
        {
            if(m < p)
            {   
                p = m;
                d = i;
            }
        }
        i++;
    }
    if(n > 1)
    {
       if(n < d && 1 < p)
       {
            d = n;
            p = 1;
       }
    }
}