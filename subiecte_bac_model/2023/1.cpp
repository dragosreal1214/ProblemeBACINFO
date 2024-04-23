#include <iostream>

using namespace std;

int DoiTrei(int n);

int main()
{
    cout << DoiTrei(3);
}

int DoiTrei(int n)
{
    while(n)
    {
        if(n % 10 != 2 && n % 10 != 3)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}