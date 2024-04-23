#include<iostream>
#include<cstring>
using namespace std;
void ecran(int n);
int main()
{
    ecran(2023);
}
void ecran(int n)
{
    char a[1000000] = "";
    char b[1000000] = "";
    int cn = n;
    int nr = 0;
    while(cn)
    {
        nr++;
        cn /= 10;
    }
    for(int i = nr - 1; i >= 0; --i)
    {
        a[i] = n % 10 + '0';
        n /= 10;
    }
    strcpy(b,a);
    int la = nr - 1;
    int lb = 0;
    int k = 0;
    while(k <= nr)
    {
        cout << a << '*' << b << endl;
        a[la--] = '*';
        b[lb++] = '*';
        ++k;
    }
}
