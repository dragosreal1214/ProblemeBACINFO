#include<iostream>
#include<cstring>
using namespace std;
char ss[101];
int main()
{
    char s[101];
    cin.getline(s, 101);
    char *p = strtok(s, " ");
    char *c = strtok(NULL, " ");
    while(c)
    {
        if(p[strlen(p) - 1] == c[strlen(c) - 1])
        {
            strcat(ss, p);
            strcat(ss, " succes ");
        }
        else
        {
            strcat(ss, p);
            strcat(ss, " ");
        }
        strcpy(p, c);
        c = strtok(NULL, " ");
    }
    strcat(ss, p);
    cout << ss;
}