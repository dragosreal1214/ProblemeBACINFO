#include <iostream>
using namespace std;
int main()
{
    int A[100][100], m, n, max = 1;
    cin >> m >> n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(A[i][j] > max && A[i][j] < 21)
                max = A[i][j];
        }
        if(max == 1)
            cout << "nu exista" << endl;
        else
            cout << max << endl;
        max = 1;
    }
}