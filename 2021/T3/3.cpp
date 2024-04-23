#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
int zeci[10], poz[10], x, nrcif, nr;
int main()
{
   while(fin >> x)
   {
        nr++;
        if(x >= 100)
        {
            while(x >= 100)
            {
                x /= 10;
            }
            zeci[x % 10]++;
            poz[nr] = x % 10;
        }
        else
        {
            zeci[x / 10]++;
            poz[nr] = x / 10;
        } 
   }
   int max = 1;
   for(int i = 0; i < 10; i++)
   {
        if(zeci[i] >= max)
            max = zeci[i];
   }
    for(int i = 1; i <= nr; i++)
    {
        if(zeci[poz[i]] == max)
        {
            
        }
    }
}