#include <iostream>
#include <cstring>

using namespace std;

char s[101], t[101], *p;
int cifmax;

int main()
{
    cin.getline(s, 101);
    p = strtok(s, " abcdefghijklmnopqrstuwxyz");
    while(p)
    {
        if(p[0] - '0' > cifmax)
        {
            cifmax = p[0] - '0';
            strcpy(t, p);
        }
        p = strtok(NULL , " abcdefghijklmnopqrstuwxyz");
    }
    if(t[0] != '\0')
    {
        cout << t;
    }
    else
    {
        cout << "nu exista";
    }
}