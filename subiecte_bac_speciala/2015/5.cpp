#include <iostream>
#include <cstring>

using namespace std;

char s[101], t[101], *p, a[2];

int main()
{
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p)
    {
        if(p[0] >= 'A' && p[0] <= 'Z')
        {
            a[0] = p[0];
            a[1] = '\0';
            strcat(t, a);
        }
        p = strtok(NULL, " ");
    }
    cout << t;
}