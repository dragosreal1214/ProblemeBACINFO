#include <iostream>

using namespace std;

void divizor(int n, int &d);

int main()
{
    int c;
    divizor(50, c);
    cout << c;
}

void divizor(int n, int &d)
{
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
            d = i;
        i++;
    }
    if(n > 1)
        d = n;
}