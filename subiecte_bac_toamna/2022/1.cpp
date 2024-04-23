#include <iostream>

using namespace std;

void schimb(int &n, int x, int p);

int main()
{
    int a = 12587;
    schimb(a, 6, 3);
    cout << a;
}

void schimb(int &n, int x, int p)
{
    int nr = 0;
    int l = 0;
    int pt = 1;
    while(n)
    {
        if(l == p)
        {
            nr = nr + x * pt;
        }
        else
        {
            nr = nr + n % 10 * pt;
        }
        pt *= 10;
        l++;
        n /= 10;
    }
    n = nr;
}