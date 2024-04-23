#include <iostream>
using namespace std;
int main()
{
    int A[20][20], m, n;
    bool exista = false;
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i = 1; i <= m; i++)
    {
        if(A[i][1])
        {
            for(int k = 1; k <= m; k++)
            {
                if(A[i][1] == A[k][n])
                {
                    exista = true;
                    cout << A[i][1] <<" ";
                    break;
                }
            }
        }
    }
    if(!exista)
    {
        cout <<" nu exista";
    }
}