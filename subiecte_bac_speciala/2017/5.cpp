#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101], *p;
    int g = 0;
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p)
    {
        if(strstr(p, "DO") || strstr(p, "RE") || strstr(p, "MI") || strstr(p, "FA") || strstr(p, "SOL") || strstr(p, "LA") || strstr(p, "SI"))
        {
            g = 1;
            cout << p << '\n';
        }
        p = strtok(NULL, " ");
    }
    if(!g)
    {
        cout << "nu exista";
    }
}