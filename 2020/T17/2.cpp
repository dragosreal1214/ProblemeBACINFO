#include<iostream>
#include<cstring>
using namespace std;
char ss[101];
int main()
{
    char consoane[] = "bcdfghjklmnpqrstwxyz";
    char s[101];
    cin.getline(s, 101);
    char *p = strtok(s, " ");
    while(p)
    {
        bool exista = false;
        for(int i = 0; i < strlen(p); i++)
        {
            if(strchr(consoane, p[i]))
            {
                exista = true;
            }
        }
        if(exista)
        {
            strcat(ss, p);
            strcat(ss, " ");
        }
        else
        {
            strcat(ss, p);
            strcat(ss, " ");
            strcat(ss, p);
            strcat(ss, " ");
        }
        p = strtok(NULL, " ");
    }
    cout << ss;
}