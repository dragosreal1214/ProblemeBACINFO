#include<iostream>
using namespace std;
int abundent(int n);
float suma_div(int a);
int main()
{
   cout << abundent(6);
}
float suma_div(int a)
{
    int s = 0;
    for(int d = 1; d * d <= a; d++)
    {
        if(a % d == 0)
        {
            s = s + d + a / d;
        }
        if(d * d == a)
        {
            s -= a / d;
        }
    }
    return s;
}
int abundent(int n)
{
    float max = -1;
    for(int i = 1; i < n; i++)
    {
        if(suma_div(i) / i > max)
        {
            max = suma_div(i) / i;
        }
    }
    if(suma_div(n) / n > max)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}