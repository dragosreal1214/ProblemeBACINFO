#include<iostream>
using namespace std;
int maxim(int n);
int main()
{
    cout << maxim(5672883);
}
int maxim(int n)
{
    int max_impar = 0;
    while(n)
    {
        if(n % 10 % 2 == 1 && n % 10 >= max_impar)
        {
            max_impar = n % 10;
        }
        n /= 10;
    }
    if(max_impar != 0)
    {
        return max_impar;
    }
    else
    {
        return -1;
    }
}