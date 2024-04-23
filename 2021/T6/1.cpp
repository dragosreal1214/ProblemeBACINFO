#include<iostream>

using namespace std;
void numarare(int n, int c, int &m);
int main()
{
    int m = 0;
    numarare(55, 5, m);
    cout << m;
}
void numarare(int n, int c, int &m)
{
    m = 0;
    int p = 1;
    while(n)
    {
        if(n % 10 != c)
        {
            m = m + (n % 10) * p;
            p *= 10;
        }
        n /= 10;
    }
    if(m == 0)
    {
        m = -1;
    }
}