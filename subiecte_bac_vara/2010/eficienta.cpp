#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main()
{
    int n, x, maxi2 = -1, maxi1 = -1;
    fin >> n;
    for(int i = 1; i <= n; i++)
    {
        fin >> x;
        if(x % 10 == 5)
        {
            if(x > maxi1)
            {
                maxi1 = x;
            }
            else
            {
                if(x > maxi2)
                {
                    maxi2 = x;
                }
            }
            
        }
    }
    cout << maxi2 << " " << maxi1;
}