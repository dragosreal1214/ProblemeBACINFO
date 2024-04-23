#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int v[1000], n, x, y;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cin >> x >> y;
}