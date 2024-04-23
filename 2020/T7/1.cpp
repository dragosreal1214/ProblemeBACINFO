#include <iostream>

using namespace std;

int putere(int n, int p);
int esteprim(int a);

int main()
{
    cout << putere(60, 6);
}

int putere(int n, int p)
{
    int d = 2;
    while(d * d <= n)
    {
        int m = 0;
        while(n % d == 0)
        {
            m++;
            n /= d;
        }
        if(d == p)  
            return m;
        d++;
    }
    return -1;
    
}