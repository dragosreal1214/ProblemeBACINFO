#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int x, nr = 0, max = -1, nr_10_sec = 0;
    while(fin >> x)
    {
        if(x % 10 == 0)
        {
            nr++;
        }
        else
        {
            if(nr > max)
            {
                max = nr;
            }
            else
            {
                if(nr == max)
                {
                    nr_10_sec++;
                }
            }
            nr = 0;
        }
    }
    cout << max << " " << nr_10_sec;
}