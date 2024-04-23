#include<iostream>
using namespace std;
void perechi(int n);
int main()
{
   perechi(9);
}
void perechi(int n)
{
    bool exista = false;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if((i % 2 == 0 && n / i % 2 == 1) || (i % 2 == 1 && n / i % 2 == 0))
            {
                exista = true;
                cout <<"[" << i << " " << n / i <<"] ";
            }
        }
    }
    if(!exista)
    {
        cout << "nu exista";
    }
}