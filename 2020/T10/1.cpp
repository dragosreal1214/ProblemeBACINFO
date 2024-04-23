#include<iostream>
using namespace std;
void produs(int n, int &p);
int main()
{
    int a = 43;
    produs(1622325, a);
    cout << a;
}
void produs(int n, int &p)
{
    int v[10] = {0};
    p = 1;
    while(n)
    {
        if(n % 10 % 2 == 0 && v[n % 10] == 0)
        {
            v[n % 10] = 1;
            p = p * (n % 10);
        }
        n /= 10;
    }
}