#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int n, x, max = 1;
    fin >> n;
    for(int i = 1; i <= n; i++)
    {
        fin >> x;
        x > max?max = x:max = max;
        cout << max <<" ";
    }
}