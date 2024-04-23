#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int a,b, x = 0, y = 0, k;
    fin >> k;
    fin >> a;
    while (fin >> b)
    {
        if(a % 1000 == k && b % 1000 == k)
        {
            x = a;
            y = b;
        }
        a = b;
    }
    if(x == 0 && y == 0)
    {
        cout <<"nu exista";
    }
    else
    {
        cout << x <<" " << y;
    }
}