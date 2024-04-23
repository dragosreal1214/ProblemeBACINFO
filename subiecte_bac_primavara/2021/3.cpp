#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.txt");

int main()
{
    int x,v[11] = {0}, marcaj[10] = {0}, s = 0;
    while(fin >> x)
    {
        if(!marcaj[x])
        {
            marcaj[x] = 1;
            v[x]++;
            s += 10;
        }
        else
            v[x]++;
    }
    for(int i = 1; i <= 10; i++)
    {
        if(marcaj[i])
        {
            s = s + (i * i * v[i]);
        }
    }
    cout << s;
}