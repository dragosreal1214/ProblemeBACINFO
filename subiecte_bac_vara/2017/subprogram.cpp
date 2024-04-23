#include<iostream>
using namespace std;

void duplicare(int &n);
int main()
{
    int x;
    cin >> x;
    duplicare(x);
    cout << x;
}
void duplicare(int &n)
{
    int nr = 0;
    int p = 1;
    while(n)
    {
        if(n % 10 % 2 == 1)
        {
            nr = n % 10 * p + nr;
            p *= 10;
        }
        else
        {
            nr = (n % 10 * 10 + n % 10 / 2) * p + nr;
            p *= 100;
        }
        n /= 10;
    }
    n = nr;
}