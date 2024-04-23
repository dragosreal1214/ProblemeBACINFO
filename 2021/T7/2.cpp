#include<iostream>
using namespace std;
int main()
{
    int A[10][10];
    int x;
    cin >> x;
    int copie_x = x;
    int nr = 0;
    while(x)
    {
        nr++;
        x /= 10;
    }
    int copie_nr = nr;
    while(copie_x)
    {
        for(int i = 1; i <= copie_nr; i++)
        {
            A[i][nr] = copie_x % 10;
        }
        nr--;
        copie_x /= 10;
    }
    for(int i = 1; i <= copie_nr; i++)
    {
        for(int j = 1; j <= copie_nr; j++)
        {
            cout << A[i][j] <<" ";
        }
        cout << endl;
    }
}