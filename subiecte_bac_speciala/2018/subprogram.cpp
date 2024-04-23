#include <iostream>

using namespace std;

int echilibrat(int n);
int main()
{
    cout << echilibrat(11211);
}
int echilibrat(int n)
{
    int s_pare = 0;
    int s_impare = 0;
    int p = 0;
    while(n)
    {
        if(p % 2 == 0 && n % 10 % 2 == 0)
        {
            s_pare += n % 10;
        }
        if(p % 2 == 1 && n % 10 % 2 == 1)
        {
            s_impare += n % 10;
        }
        p++;
        n /= 10;
    }
    if(s_impare % 2 == 1 && s_pare % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}