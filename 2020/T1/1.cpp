#include<iostream>
using namespace std;
void putere(int n, int &d, int &p);
int main()
{
    int a, b;
    putere(10780, a, b);
    cout << a << b;
}
void putere(int n, int &d, int &p)
{
    int i = 2;
    p = 0;
    d = 0;
    while(d <= n)
    {
        int pn = 0;
        while(n % i == 0)
        {
            pn++;
            n = n / i;
        }
        if(pn >= p)
        {
            p = pn;
            d = i;
        }
        i++;
    }

}