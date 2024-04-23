#include<iostream>
using namespace std;
int Putere(int n, int &x, int &p)
{
    int d = 2;
    while(d * d <= n)
    {
        int m = 0;
        while(n % d == 0)
        {
            m++;
            n /= d;
        }
        d++;
        
    }
}
int main()
{

}