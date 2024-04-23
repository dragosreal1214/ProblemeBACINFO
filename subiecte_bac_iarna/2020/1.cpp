#include <iostream>
#include <cmath>

using namespace std;

void radical(int n, int k, int &a, int &b);

int main()
{
    int m,n;
    radical(36, 2, m,n);
    cout << m << " " << n;
}

void radical(int n, int k, int &a, int &b)
{
    a = 1;
    b = 1;
    int d = 2;
    while(d * d <= n)
    {
        int p = 0;
        while(n % d == 0)
        {
            p++;
            n /= d;
        }
        if(p > k)
        {
            if(p % k == 0)
                a *= pow(d, p / k);
            else
                a *= pow(d, p / k), b *= pow(d, p % k);
        }
        if(p == k)
            a *= d;
        if(p < k && p)
            b *= pow(d, p);
        d++;
    }
    if(n > 1)
    {
        b *= n;
    }
}