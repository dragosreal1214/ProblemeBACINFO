#include<iostream>
using namespace std;
int baza(int n);
int main()
{
    cout << baza(50731);
}
int baza(int n)
{
    int max = -1;
    while(n)
    {
        if(n % 10 > max)
            max = n % 10;
        n /= 10;    
    }
    return max + 1;
}