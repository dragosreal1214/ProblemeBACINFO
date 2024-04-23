#include <iostream>
#include <cstring>

using namespace std;

char s[101], cs[101], *p;
int g;

int main()
{
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p)
    {
        if(strlen(p) % 2 == 0)
        {
            strcat(cs, "# ");
            g = 1;
        }
        else
        {
            strcat(cs, p);
            strcat(cs, " ");
        }
        p = strtok(NULL, " ");
    }
    if(g)
        cout << cs;
    else
        cout << "nu exista";
}