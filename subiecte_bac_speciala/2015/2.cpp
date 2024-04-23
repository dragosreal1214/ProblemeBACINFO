#include <iostream>

using namespace std;

int DivImpar(int a, int b);

int main()
{
    cout << DivImpar(30, 60);
}

int DivImpar(int a, int b)
{
    int c = 0;
    if(b < a)
    {
        c = a;
        a = b;
        b = c;
    }
    for(int i = 1; i <= a; i += 2)
    {
        if(a % i == 0 && a % i == b % i)
            c = i;
    }
    return c;
}