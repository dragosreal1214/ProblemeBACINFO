#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[251], x[251], *p;
    int g = 0;
    cin.getline(s, 251);
    cin.get();
    cin >> x;
    p = strtok(s, " ");
    while(p)
    {
        if(!strcmp(s,p))
        {
            g = 1;
            p = strtok(NULL, " ");
            for(int i = 0; p[i] != ';'; ++i)
            {
                cout << p[i];
            }
            cout << " ";
        }
        p = strtok(NULL, " ");
    }
    if(!g)
    {
        cout << "NU";
    }
}