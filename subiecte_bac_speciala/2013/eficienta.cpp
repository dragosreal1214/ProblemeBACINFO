#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int x, v[99] = {0}, mini = 0, maxi = 0;
    while(fin >> x)
    {
        if(x >= 10 && x <= 99)
        {
            v[x] = 1;
        }
    }
    for(int i = 10; i <= 98; i += 2)
    {
        if(v[i] == 0)
        {
            mini = i;
            break;
        }
    }
    for(int i = 98; i >= 10; i -= 2)
    {
        if(v[i] == 0)
        {
            maxi = i;
            break;
        }
    }
    if(mini && maxi)
    {
        cout << mini <<" " << maxi;
    }
    else
    {
        cout << "Nu exista";
    }
}