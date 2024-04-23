#include <iostream>

using namespace std;

void cifre(int a, int b, int &c, int &d)
{
    c = 0, d = 0;
    int gmic = 1, gmax = 1, mic = 0, mare = 0;
    for(int i = a; i <= b && !mic; ++i)
    {
        mic = i;
        int aux = i % 10;
        i /= 10;
        while(i && gmic)
        {
            if(i % 10 != aux)
                aux = i % 10;
            else
                gmic = 0;
            i /= 10;
        }
        if(gmic == 0)
            mic = 0;
    }
    for(int i = b; i >= a && mare; --i)
    {
        mare = i;
        int aux2 = i % 10;
        i /= 10;
        while(i && gmax)
        {
            if(i % 10 != aux2)
                aux2 = i % 10;
            else
                gmax = 0;
            i /= 10;
        }
        if(gmax == 0)
            mare = 0;
    }
    if(mare == 0 || )
}