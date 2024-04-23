#include <iostream>

using namespace std;

void DNPI(int n);
int prim(int a);
int main()
{
    DNPI(90);
}
int prim(int a)
{
    if(a < 2)  
        return 0;
    else
    {
        for(int i = 2; i * i <= a; ++i)
        {
            if(a % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
void DNPI(int n)
{
    cout << 1 <<" ";
    for(int i = 3; i <= n; i += 2 )
    {
        if(!prim(i) && n % i == 0)
        {
            cout << i << " ";
        }
    }
}
