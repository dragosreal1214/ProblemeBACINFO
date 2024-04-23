#include<iostream>
using namespace std;
int main()
{
    int n, k, A[400][20];
    cin >> n >> k;
    int nr = 0,  pas = 0;
    for(int i = 1; i <= n * k; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            A[i][j] = j + nr; 
        }
        pas++;
        if(pas == k)
        {
            nr++;
            pas = 0;
        }
    }
    for(int i = 1; i <= n * k; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << A[i][j] <<" "; 
        }
        cout << endl;
    }
}