#include <iostream>

using namespace std;

int MaxImp(int a, int b);

int main()
{
    cout << MaxImp(14, 19);
}

int MaxImp(int a, int b)
{
    int g = 0, p = 1;
    for(int i = b; i >= a && !g; --i)
    {
        for(int d = 1; d <= i; d += 2)
        {
            if(i % d == 0)
                p *= d;
        }
        if(p > i)
        {
            return i;
            g = 1;
        }
    }
    return 0;
}