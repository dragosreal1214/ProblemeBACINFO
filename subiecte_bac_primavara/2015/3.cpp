#include <iostream>

using namespace std;

void Cifre(int n)
{
    int v[9] = {0};
    while(n)
    {
        if(!v[n % 10])
        {
            v[n % 10] = 1;
            cout << n % 10 <<" ";
        }
        n /= 10;
    }
}
int main()
{
    Cifre(24207);
}