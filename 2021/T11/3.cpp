#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("bac.txt");

int main()
{
    int x,y;
    fin >> x >> y;
    int n = (y - x) / 2;
    cout << y << " " << x <<" ";
    n--;
    int z = 0;
    while(n)
    {
        z = x - 2 * n;
        cout << z <<" ";
        n--;
        x = z;
    }
}