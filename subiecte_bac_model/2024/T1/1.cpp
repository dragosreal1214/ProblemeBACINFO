#include<iostream>
using namespace std;
int produs(int a, int b);
int main()
{
    cout << produs(20, 12);
}
int produs(int a, int b)
{
    int p = 1;
    if(a < b)
        swap(a, b);
    for(int i = 1; i <= b; i++)
    {
        if(b % i == 0 && a % i == 0)
        {
            p *= i;
        }
    }
    return p;
}