#include<iostream>
using namespace std;
int main()
{
    int n, k, A[20][400];
    cin >> n >> k;
    int nr = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n * k; j++)
        {
            A[i][j] = i + nr;
            if(j % k == 0)
                nr++;
        }
        nr = 0;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n * k; j++)
        {
             cout << A[i][j] <<" ";
        }
        cout << "\n";
    }
}