#include <iostream>

using namespace std;

void rest(int x, int y, int n, int &k);

int main()
{
    int a;
    rest(10, 101, 3000, a);
    cout << a;
}

void rest(int x, int y, int n, int &k)
{
    k = 0;
    for(int i = n; i >= 1 && !k; --i)
    {
        if(i % x == 2 && i % y == 2)
        {
            k = i;
        }
    }
}