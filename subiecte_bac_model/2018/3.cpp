#include <iostream>

using namespace std;

void divizori(int n, int &x, int &y, int &z)
{
    x = y = z = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(n % j == 0)
                {
                    if(n - j - i > j && n % (n - j - i) == 0)
                    {
                        x = i;
                        y = j;
                        z = n - j - i;
                    }
                }
            }
        }
    }
}

int main()
{
    int a,b,c;
    divizori(9, a,b,c);
    cout << a << b << c;
}