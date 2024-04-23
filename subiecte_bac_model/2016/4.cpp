#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main()
{
    int x, par = 0, impar = 0, ep = 0, eimp = 0;
    int maxpar = 100000002;
    int maximpar = -1;
    while(fin >> x)
    {
        if(x % 2 == 0)
        {
            if(x >= maxpar)
            {
                ep = 0;
            }
            else
            {
                maxpar = x;
            }
        if(x % 2 == 1)
        {
            if(x <= maximpar)
            {
                eimp = 0;
            }
            else
            {
                maximpar = x;
            }
        }
        }
    }
}