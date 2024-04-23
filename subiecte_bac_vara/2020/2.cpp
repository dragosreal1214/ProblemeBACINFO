#include<iostream>
#include<cstring>
using namespace std;
char ss[101], a[2], exista;
int main()
{
    char s[101];
    cin.getline(s, 101);
    char *p = strtok(s, " ");
    while(p)
    {
        if(strlen(p) >= 3)
        {
            exista = 1;
            a[0] = p[0];
            strcat(ss, p + 1);
            strncat(ss, a, 1);
            strcat(ss, " ");
        }
        else
        {
            strcat(ss, p);
            strcat(ss, " ");
        }
        p = strtok(NULL, " ");
    }
    if(exista == 1)
    {
        cout << ss;
    }
    else
    {
        cout <<"nu exista";
    }
}