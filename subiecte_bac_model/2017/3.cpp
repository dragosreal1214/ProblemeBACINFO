#include <iostream>

using namespace std;

int nrDiv(int a, int b);

int main()
{
    cout << nrDiv(10, 40);
}

int nrDiv(int a, int b)
{
    int nr = 0;
    for(int i = a; i <= b; i++)
    {
        int d = 1;
        while(d * d + d <= i)
        {
            if(d * d + d == i)
            {
                nr++;
                break;
            }
            d++;
        }
    }
    return nr;
}