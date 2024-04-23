#include<iostream>
using namespace std;
void paritate(int n, int &nr);
int main()
{
    int a = 20, b = 0;
    paritate(20, b);
    cout << b;
}
void paritate(int n, int &nr)
{
    nr = 0;
    int par = 0;
    if(n % 2 == 1)
    {
        par = 1;
    }
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0 && i % 2 == par)
        {
            nr++;
        }
        if(n % i == 0 && n / i % 2 == par)
        {
            nr++;
        }
    }
}