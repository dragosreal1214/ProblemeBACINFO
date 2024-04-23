#include <iostream>
#include <fstream>
using namespace std;
ifstream bac1("bac1.txt");
ifstream bac2("bac2.txt");
int n1, n2, i, j, a, b;
int main()
{
    bac1 >> n1 >> a;
    bac2 >> n2 >> b;
    while(i < n1 && j < n2)
    {
        if(a < b)
        {
            i++;
            bac1 >> a;
            if(a % 5 == 0)
            {
                cout << a <<" ";
            }
        }
        if(b > a)
        {
            j++;
            bac2 >> b;
            if(b % 5 == 0)
            {
                cout << b <<" ";
            }
        }
        if(a == b)
        {
            i++;
            j++;
            bac1 >> a;
            bac2 >> b;
        }
    }
    if(a > b && a % 5 == 0)
    {
        cout << a;
    }
    if(b < a && b % 5 == 0)
    {
        cout << b;
    }
}