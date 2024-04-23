#include <iostream>
#include <cmath>

using namespace std;


void radical(int n, int &x, int &y);

int main()
{
    int a, b;
    radical(15000,a,b);
    cout << a << " " << b;
}

void radical(int n, int &x, int &y)
{
    if(sqrt(n) == int(sqrt(n)))
    {
        x = sqrt(n);
        y = 1;
    }
    else
    {
        y = 1;
        x = 1;
        int d = 2;
        while(d * d <= n)
        {
            int p = 0;
            while(n % d == 0)
            {
                p++;
                n /= d;
            }
            if(p % 2 == 1)
            {
                x = x * pow(d, (p - 1) / 2);
                y *= d;
            }
            else
            {
                x = x * pow(d, p / 2);
            }
            d++;
        }
    }
}