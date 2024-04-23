#include<iostream>
using namespace std;
bool identice(int x);
int main()
{
    int n;
    cin >> n;
    cout << identice(n);
}
bool identice(int x)
{
    int cif = x % 10;
    x /= 10;
    while(x)
    {
        if(x % 10 != cif)
        {
            return 0;
            break;
        }
        else
        {
            x /= 10;
        }
    }
    return 1;
}