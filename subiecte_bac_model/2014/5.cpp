#include <iostream>
#include <cstring>

using namespace std;

char s[101], *p, t[101];
int l, poz;

int main()
{
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p)
    {
        for(int i = 0; p[i]; ++i)
        {
            if(strchr("aeiou", p[i]))
            {
                poz = i;
                int j = i + 1;
                while(strchr("aeiou", p[j]))
                {
                    j++;
                }
                strcpy(p + poz + 1, p + j);
                strcat(t, p);
                strcat(t, " ");
            }
        }
        p = strtok(NULL, " ");
    }
    t[strlen(t) - 1] = '\0';
    cout << t;
}