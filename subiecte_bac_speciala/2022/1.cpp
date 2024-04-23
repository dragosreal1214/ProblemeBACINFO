#include <iostream>
#include <cmath>

using namespace std;

void patrate(int n, int &x, int &y);

int main()
{
    int a,b;
    patrate(400, a,b);
    cout << a <<" " << b;
}

void patrate(int n, int &x, int &y)
{
    x = 0, y = 0;
    int g = 0;
    for(int i = 2; i < n && !g; ++i)
    {
        if(n % (i * i) == 0 && sqrt(n / (i * i)) == int(sqrt(n / (i * i))) && i < sqrt(n / (i * i)))
        {
            g = 1;
            x = i;
            y = sqrt(n / (i * i));
        }
    }
}