#include <iostream>
#include <cstring>

using namespace std;

char s[101];

int poz = -1;

int main()
{
    cin.getline(s, 101);
    for(int i = 0; s[i]; i++)
        if(strchr("aeiou", s[i]))
            poz = i;
    if(poz != -1)
    {
        strcpy(s + poz, s + poz + 1);
        cout << s;
    }
    else
        cout << "nu exista";
}