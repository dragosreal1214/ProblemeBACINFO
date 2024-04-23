#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101], *p;
    int n;
    cin >> n;
    struct lungime1
    {
        char a[101];
    }v[100];
    struct lungime2
    {
        char b[101];
    }u[100];
    cin.get();
    cin.getline(s, 101);
    p = strtok(s, " ");
    int l1 = 0, l2 = 0;
    while(p)
    {
        if(strlen(p) >= 5)
        {
            strcpy(v[l1].a, p);
            l1++;
        }
        else
        {
            strcpy(u[l2].b, p);
            l2++;
        }
        p = strtok(NULL, " ");
    }
    if(l1 && l2)
    {
        for(int i = 0; i < l1; i++)
        {
            cout << v[i].a << endl;
        }
        for(int i = 0; i < l2; i++)
        {
            cout << u[i].b << endl;
        }
    }
    else
    {
        cout << "nu exista";
    }
}