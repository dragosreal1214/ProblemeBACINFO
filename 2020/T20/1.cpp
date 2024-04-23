#include<iostream>
#include<cmath>
using namespace std;
int transformareBaza10(int b, int n);
int main()
{
    cout <<  transformareBaza10(2, 10010);
}
int transformareBaza10(int b, int n)
{
    int s = 0;
    int v[9] = {0};
    int i = 0;
    while(n)
    {
        v[i] = n % 10;
        i++;
        n /= 10;
    }
    for(int j = i; j >= 0; j--)
    {
        s = s + v[j] * pow(b, i - j);
    }
    return s;
}