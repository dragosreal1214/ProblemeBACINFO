#include<iostream>
using namespace std;
int fii(int n)
{
    for(int i = 1; i <= n / 2; i++)
        if(n % i == 0 && n / i > i)
            cout <<"("<< n / i <<" " << i <<")" <<" ";
}
int main()
{
    int n;
    cin >> n;
    fii(n);
}