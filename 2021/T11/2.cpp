#include<iostream>

using namespace std;

int main()
{
    int n, k, A[20][20], B[20][20];
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j]; 
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            B[i][j] = A[i][j]; 
        }
    }
    for(int i = 0; i < k - 1; i++)
    {
        int aux = B[i][k - 1];
        B[i][k - 1] = B[k - 1][i];
        B[k - 1][i] = aux;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout <<  B[i][j] <<" "; 
        }
        cout << endl;
    } 
}