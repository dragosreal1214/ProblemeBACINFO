#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 101);
    char *p = strtok(s, " ");
    bool a = false;
    bool e = false;
    bool i = false;
    bool o = false;
    bool u = false;
    bool exista = false;
    while(p)
    {
        if(strchr(p, 'a'))
            a = true;
        if(strchr(p, 'e'))
            e = true;
        if(strchr(p, 'i'))
            i = true;
        if(strchr(p, 'o'))
            o = true;
        if(strchr(p, 'u'))
            u = true;
        if(a && !e && !u && !o && !i)
        {
            cout << p << endl;
            exista = true;
        }
        if(!a && e && !u && !o && !i)
        {
            cout << p << endl;
            exista = true;
        }
        if(!a && !e && u && !o && !i)
        {
            cout << p << endl;
            exista = true;
        }
        if(!a && !e && !u && !o && i)
        {
            cout << p << endl;
            exista = true;
        }
        if(!a && !e && !u && o && !i)
        {
            cout << p << endl;
            exista = true;
        }
        a = e = i = o = u = false;
        p = strtok(NULL, " ");
    }
    if(!exista)
    {
        cout << "nu exista";
    }
}