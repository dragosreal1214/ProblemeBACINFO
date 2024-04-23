#include<iostream>
using namespace std;
void generatoare(int n)
{
    int a = 2;
    int b = 0;
    bool exista = false;
    while(a <= n)
    {
        b = n / a;
        if(a * b + a / b == n)
        {
            cout << a << "-" << b <<" ";
            exista = true;
        }
        if(n / 2 == a)
        {
            cout << a << "-" << 1 <<" ";
            exista = true;
        }
        a += 2;

    }
    if(!exista)
    {
        cout <<"nu exista";
    }
}
int main()
{
    generatoare(1010);
}