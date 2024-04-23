#include <iostream>
#include <cstring>

using namespace std;

char t[101];
int main()
{
    char s[101], *p;
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p)
    {
        if(islower(p[0]))
            p[0] -= 32;
        for(int i = 1; i < strlen(p); ++i)
        {
            if(isupper(p[i]))
            {
                p[i] += 32;
            }
        }
        strcat(t, p);
        strcat(t, " ");
        p = strtok(NULL, " ");
    }
    cout << t;
}