#include<iostream>
#include<cmath>
using namespace std;
int pDoi(int n);
int main()
{
    cout << pDoi(20);
}   
int pDoi(int n)
{
    int i = 0;
    while(int(pow(2, i)) <= n)
    {
        i++;
    }
    return int(pow(2, i - 1));
}