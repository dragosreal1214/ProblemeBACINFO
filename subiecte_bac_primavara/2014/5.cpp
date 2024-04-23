#include <iostream>
#include <cstring>

using namespace std;

char s[101], t[201], a[2], *p;

int main()
{
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p)
    {
        for(int i = 0; p[i]; i++)
        {
            a[0] = p[i];
            a[1] = '\0';
            if(strchr("aeiou", a[0]))
            {
                strcat(t, a);
                strcat(t, a);
            }
            else
            {
                strcat(t, a);
            }
        }
        strcat(t, " ");
        p = strtok(NULL, " ");
    }
    t[strlen(t) - 1] = '\0';
    cout << t;
}