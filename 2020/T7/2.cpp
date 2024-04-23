#include <iostream>

using namespace std;

int main()
{
    int A[20][20], n, m, v[2] = {0}, l = 0, e[20]={0};
    cin >> m >> n;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];
    for(int i = 0; i < m; i++)
    {
        for(int k = 0; k < m; k++)
            if(A[i][0] == A[k][n - 1] && !e[A[i][0]])
            {
                e[A[i][0]] = 1;
                v[l] = A[i][0];
                l++;
            }
    }
    if(v[0] == 0 || v[1] == 0)
        cout << "nepolarizate";
    else
        for(int i = 0; i < 2; i++)
            cout << v[i] <<" ";
}