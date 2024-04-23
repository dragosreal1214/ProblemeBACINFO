#include <iostream>
#include <cstring>

using namespace std;

char s[101], t[101], *p;
int g, m;

int main()
{
    cin.getline(s, 101);
    strcpy(t, s);
    p = strtok(s, " ");
    while(p)
    {
        if(strlen(p) % 2 == 0)
        {
            m = strlen(p) / 2;
            if(p[m] == p[m - 1])
            {
                strcpy(p + m - 1, p + m);
                if(strstr(t, p))
                    g = 1;
            }
        }
        p = strtok(NULL, " ");
    }
    if(g)
        cout << "DA";
    else
        cout << "NU";
}