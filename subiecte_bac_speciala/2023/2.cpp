#include <iostream>

using namespace std;

int main()
{
    int A[20][20], n;
    cin >> n;
    for(int j = 0 ; j < n; j++)
        cin >> A[0][j];
    for(int i = 1; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if(i + j > n - 1)
                A[i][j] = -1;
            else
                A[i][j] = (A[i - 1][j] + A[i - 1][j + 1]) % 100;
        } 
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}