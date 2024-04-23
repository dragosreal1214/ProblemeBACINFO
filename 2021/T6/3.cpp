#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("bac.txt");
int main()
{
    int nr = 0;
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    int x;
    while(fin >> x)
    {
        nr++;
        if(x < 0 && p1 == p2)
        {
            p1 = nr;
        }
        else
        {
            if(x < 0 && p2 == p3)
            {
                p2 = nr;
            }
            else
            {
                if(x < 0)
                    p3 = nr;
            }
        }
    }
    int max = 0;
    if(p2 - 1 <= p3 - p1 - 1)
    {
        max = p3 - p1 - 1;
    }
    if(max < nr - p2)
    {
        max = nr - p2;
    }
    cout << max;
}