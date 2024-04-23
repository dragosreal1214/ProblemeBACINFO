#include <iostream>
#include <cstring>

using namespace std;

char s[101], t[101], *p;

int main()
{
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p)
    {
        if(strlen(p) == 3)
        {
            strcat(t, "* ");
        }
        else
        {
            strcat(t, p);
            strcat(t, " ");
        }
        p = strtok(NULL, " ");
    }
    cout << t;
}