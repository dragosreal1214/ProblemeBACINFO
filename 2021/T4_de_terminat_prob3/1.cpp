#include <iostream>
using namespace std;
int joc(int n);
int main()
{
    cout << joc(12);
}
int joc(int n)
{
    int k = 1;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            k = k + 2;
        if(i * i == n)
            k--;
    }
    return k;
}