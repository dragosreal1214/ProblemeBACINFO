#include<iostream>
using namespace std;
int Fibo(int n)
{
    int f1 = 1;
    int f2 = 1;
    int f3 = 0;
    int nr_impar = 2;
    while(nr_impar < n)
    {
        f3 = f1 + f2;
        if(f3 % 2 == 1)
        {
            nr_impar++;
        }
        f1 = f2;
        f2 = f3;
    }
    return f3;
}
int main()
{
    cout << Fibo(6);
}