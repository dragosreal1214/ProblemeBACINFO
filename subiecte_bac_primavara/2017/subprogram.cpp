#include <iostream>

using namespace std;

int ranguri(int n);
int main()
{
    cout << ranguri(6594270);
}
int ranguri(int n)
{
    int p = 0;
    int nr = 0;
    while(n)
    {
        if(n % 10 == p)
            nr++;
        p++;
        n /= 10;
    }
    return nr;
}