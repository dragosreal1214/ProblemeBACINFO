#include<iostream>
using namespace std;
void suma(int n, int &s);
int main()
{
    int S;
    suma(47138, S);
    cout << S; 
}
void suma(int n, int &s)
{
    s = 0;
    int v[5] = {0};
    while (n)
    {
        if(n % 10 % 2 == 1 && v[n % 10] == 0)
        {
            s += n % 10;
            v[n % 10] = 1;
        }
        n /= 10;
    }
}