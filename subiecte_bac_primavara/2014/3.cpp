#include <iostream>

using namespace std;

void divizori(int n, int &mic, int &mare);

int main()
{
    int a,b;
    divizori(12,a,b);
    cout << a << b;
}

void divizori(int n, int &mic, int &mare)
{
    mic = 0;
    mare = 0;
    int g = 0;
    for(int i = 2; i * i < n & !g; i++)
        if(n % i == 0)
        {
            mic = i;
            mare = n / i;
            g = 1;
        }
}