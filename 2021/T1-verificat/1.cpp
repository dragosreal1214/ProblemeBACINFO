#include<iostream>
using namespace std;
void divX(int n, int x);
int main()
{
    int x;
    divX(4,15);
}
void divX(int n, int x)
{
    while(n > 0)
    {
        cout << n * x <<" ";
        n--;
    }
}