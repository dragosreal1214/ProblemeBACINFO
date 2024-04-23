#include <iostream>

using namespace std;

int CifrePrime(int n);
int esteprim(int a);

int main()
{
    cout << CifrePrime(1235405);
}

int esteprim(int a)
{
    if(a < 2)
        return 0;
    else
        for(int d = 2; d * d <= a; d++)
        {
            if(a % d == 0) 
                return 0;
        }
    return 1;
}

int CifrePrime(int n)
{
    int s = 0;
    while(n)
    {
        if(esteprim(n % 10))
            s += n % 10;
        n /= 10;
    }
    return s;
}