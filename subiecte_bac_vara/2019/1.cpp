#include<iostream>
using namespace std;
int Impare(int n);
int main()
{
    cout << Impare(15690);
}
int Impare(int n)
{
    int nr_nou = 0;
    int p = 1;
    while(n)
    {
        if(n % 10 % 2 == 1)
        {
            nr_nou = nr_nou + (n % 10 - 1) * p;
        }
        else
        {
            nr_nou = nr_nou + n % 10 * p;
        }
        n /= 10;
        p *= 10;    
    }
    return nr_nou;
}