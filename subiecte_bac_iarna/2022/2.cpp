#include <iostream>
#include <cstring>

using namespace std;

char s[101], cuv[11], *p, inainte[101];
int g = 0;

int main()
{
    cin >> cuv;
    cin.get();
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p)
    {

        if(strcmp(p, cuv))
        {
            strcpy(inainte, p);
        }
        else
        {
            g = 1;
            p = strtok(NULL, " ");
            cout << inainte << " " << p << '\n';
        }
        p = strtok(NULL, " ");
    }
    if(!g)
        cout << "NU EXISTA";
}