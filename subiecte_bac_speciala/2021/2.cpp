#include <iostream>

using namespace std;

int main()
{
    int A[20][20], n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        for(int j = 0 ; j < n; j++)
            cin >> A[i][j];
    for(int j = 0 ; j < k - 1; j++)
    {
        int aux = A[k - 1][j];
        A[k - 1][j] = A[j][k - 1];
        A[j][k - 1] = aux;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
            cout << A[i][j] <<" ";
        cout << endl;
    }
}