#include<iostream>
#include<fstream>
using namespace std;
ofstream fout("bac.txt");
int main()
{
    int n;
    cin >> n;
    fout << n << " ";
    n /= 2;
    while(n >= 1)
    {
        fout << n << " ";
        n /= 2;
    }
}
