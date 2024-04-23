#include<iostream>
using namespace std;
int A[50][50], m, n, nr, ok, c;
int main()
{
    cin >> m >> n;
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> A[i][j]; 
        }
    }
    for(int j = 0; j < n; ++j)
    {
        c = A[0][j];
        for(int i = 0; i < m; ++i)
        {
            if(A[i][j] == c)
            {
                nr++;
            }
        }
        if(nr == m)
        {
            cout << c <<" "; 
            ok = 1;
        }
        nr = 0;
    }
    if(!ok)
        cout << "Nu exista";
}