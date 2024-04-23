#include<iostream>
#include<fstream>
using namespace std;
ofstream fout("bac.txt");
int main()
{
    int f1, f2, f3;
    cin >> f2 >> f3;
    fout << f3 << " " << f2 <<" ";
    do
    {
        f1 = 3 * f2 - f3;
        f3 = f2;
        f2 = f1;
        fout << f1 <<" ";
    } while(f3 != 3 * f2 - f1);
    fout << f1;
}