#include<iostream>
using namespace std;
void NrImp(int x, int y, int &nr)
{
    nr = 0;
    for(int i = x; i <= y; ++i)
    {
        int nrdiv = 0;
        for(int j = 1; j <= i; ++j)
        {
            if(i % j == 0 && j % 2 == 1)
            {
                nrdiv++;
            }
        }
        if(nrdiv == 3)
        {
            nr++;
        }
    }
}
int main()
{
    int a;
    NrImp(4, 50, a);
    cout << a;
}