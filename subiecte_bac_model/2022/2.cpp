#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101], *p;
    int x, v[100] = {0}, l = 0, g = 0;
    cin.getline(s, 101);
    p = strtok(s, " qwertyuiopasdfghjklzxcvbnm");
    while(p)
    {
        int nr = 0;
        x = atoi(p);
        while(x)
        {
            nr++;
            x /= 10;
        }
        v[l] = nr;
        l++;
        p = strtok(NULL, " qwertyuiopasdfghjklzxcvbnm");
    }
    if(l == 1)
    {
        cout << v[0] <<" ";
    }
    else
    {
        for(int i = 1; i < l; i++)
        {
            if(v[i] == v[0])
                g = 1;
            else
            {
                g = 0;
                break;;
            }
        }
    }
    if(g)
        cout << v[0];
    else
        cout << "NU";
}