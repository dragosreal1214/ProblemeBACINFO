#include <iostream>

using namespace std;

int main()
{
    int A[20][20], n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        for(int j = 0 ; j < n; j++)
            cin >> A[i][j];
    int aux = A[k - 1][k - 2];
    for(int j = k - 3; j >= 0; j--)
    {
        A[k - 1][j + 1] = A[k - 1][j];   
    }
    A[k-1][0] = aux; 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
            cout << A[i][j] <<" ";
        cout << endl;
    }
}