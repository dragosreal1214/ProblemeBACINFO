#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("bac.txt");

int main()
{
    int n, p5 = 0, p3 = 0, i = 5, j = 3;
    cin >> n;
    while(i <= n)
    {
        p5 += n  /i;
        i *= 5;
    }
    while(j <= n)
    {
        p3 += n / j;
        j *= 3;
    }
    if(p3 == 0 || p5 == 0 || p3 < 2)
    {
        fout << 0;
    }
    else
    {
        if(p3 == 2 * p5)
        {
            fout << p5;
        }
        else
        {
            do
            {
                p3--;
            } while (p3 == 2 * p5);
            fout << p5;
        }
    }
}