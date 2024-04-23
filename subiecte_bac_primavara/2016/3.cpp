#include <iostream>

using namespace std;

int sPar(int n);

int main()
{
    cout << sPar(95);
}

int sPar(int n)
{
    if(n % 2 == 0)
        n += 2;
    else
        n++;
    int nr = 0;
    for(int i = n; !nr; i += 2)
    {
        int s = 0;
        for(int d = 2; d * d <= i; d++)
        {
            if(i % d == 0)
                s = s + d + i / d;
            if(d * d == i)
                s -= d;
        }
        if(s % 2 == 0)
            nr = i;
    }
    return nr;
}