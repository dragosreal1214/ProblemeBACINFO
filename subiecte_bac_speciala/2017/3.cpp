#include <iostream>

using namespace std;

void identice(int a, int b);

int main()
{
    identice(700, 1500);
}

void identice(int a, int b)
{
    int g = 0;
    for(int i = a; i <= b; i++)
    {
        int nr = i;
        int cif = nr % 10;
        nr /= 10;
        int exista = 1;
        while(nr)
        {
            if(nr % 10 != cif) 
            {
                exista = 0;
                break;
            }
            nr /= 10;
        }
        if(exista)  
        {
            g = 1;
            cout << i <<" ";
        }
    }
    if(!g)
        cout << "nu exista";
}