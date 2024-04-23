#include <iostream>

using namespace std;


int Egal(int n);

int main()
{
    cout << Egal(7921470);
}

int Egal(int n)
{
    int nr = 0;
    while(n)
    {
        if(n % 10 % 2 == 1 && nr == 0)
        {
            nr = n % 10;
        }
        if(n % 10 % 2 == 1 && nr && n % 10 != nr)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}