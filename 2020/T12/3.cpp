#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("bac.out");

int main()
{
    int n;
    cin >> n;
    fout << n <<" ";
    while(n > 10)
    {
        if(n % 2 == 1)
        {
            n--;
            fout << n <<" ";
        }
        else   
        {
            n /= 2;
            fout << n <<" ";
        }
    }
    for(int i = n - 1; i >= 1; i--)
        fout << i <<" ";

}