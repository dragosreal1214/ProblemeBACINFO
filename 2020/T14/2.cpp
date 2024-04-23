#include<iostream>
#include<cstring>
using namespace std;
char copie_s[101];
int main()
{
    char s[101];
    cin.getline(s, 101);
    char *p = strtok(s, " -");
    while (p)
    {
        strcat(copie_s, p);
        strcat(copie_s, " ");
        p = strtok(NULL, " -");
    }
    cout << copie_s;
}