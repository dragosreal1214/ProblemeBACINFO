#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101], t[101];
    cin.getline(s, 101);
    char *p = strtok(s, " ");
    while(p)
    {
       if(strchr(p, ','))
       {
            for(int i = 0; p[i] != ',' &&  || i < strlen(p); i++)
            { 
                char m = p[i];
                strcat(t, m);
            }
            strcat(t, " ");
       }
       strtok(NULL, " ");
    }
    cout << t;
}
