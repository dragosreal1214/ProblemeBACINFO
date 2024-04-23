#include<iostream>
using namespace std;
void suma(int n, int &s);
int main()
{
    int a = 43;
    suma(15, a);
    cout << a;
}
void suma(int n, int &s)
{
    int v[10] = {0};
    s = 0;
    while(n)
    {
        if(n % 10 % 2 == 0 && v[n % 10] == 0)
        {
            v[n % 10] = 1;
            s += (n % 10);
        }
        n /= 10;
    }
}