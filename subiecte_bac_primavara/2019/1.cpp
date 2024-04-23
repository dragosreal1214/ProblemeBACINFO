#include <iostream>

using namespace std;

void inserare(int &n);

int main()
{
    int a;
    cin >> a;
    inserare(a);
    cout << a;
}

void inserare(int &n)
{
    int nr = 0;
    int p = 1;
    while(n > 9)
    {
        nr = nr + n % 10 * p;
        p *= 10;
        nr = nr + abs(n / 10 % 10 - n % 10) * p;
        p *= 10;
        n /= 10;

    }
    nr = nr + n * p;
    n = nr;
}