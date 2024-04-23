#include<iostream>
using namespace std;
int main()
{
    int A[1000][50];
    int ns, np;
    cin >> ns >> np;
    for(int i = 1; i <= ns; i++)
    {
        for(int j = 1; j <= np; j++)
        {
            cin >> A[i][j]; 
        }
    }
    for(int i = 1; i <= ns; i++)
    {
        int max = -1;
        int col_max = 0;
        for(int j = 1; j <= np; j++)
        {
            if(A[i][j] > max)
            {
                max = A[i][j];
                col_max = j;
            }
        }
        cout << i << ":" << col_max <<" ";
    }
}