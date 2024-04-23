#include <iostream>

using namespace std;

int A[20][20];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(i == j)
            {
                A[i][j] = 0;
            }
            if(i < j)
            {
                A[i][j] = A[i][j - 1] + 1;
            }
        }
    }
    for(int i = 1; i < n; ++i)
    {
        int nr = i;
        for(int j = 0; j < i; j++)
        {
            A[i][j] = nr;
            nr--; 
        }
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout << A[i][j] <<" "; 
        }
        cout << endl;
    }
}