#include<iostream>
using namespace std;
void afisare(int x, int y, int k);
int main()
{
    afisare(11,21,4);
}
void afisare(int x, int y, int k)
{
    int nr = 0;
    for(int i = x; i <= y; i++)
    {
        cout << i <<" ";
        nr++;
        if(nr == k)
        {
            cout << "*" <<" ";
            nr = 0;
        }
    }
    cout << "*"; 
}