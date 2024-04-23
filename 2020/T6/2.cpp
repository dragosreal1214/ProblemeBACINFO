#include<iostream>
#include<cstring>
using namespace std;
int nr_voc, nr_con;
int main()
{
    char voc[] = "aeiou";
    bool exista = false;
    char s[101];
    cin.getline(s, 101);
    char *p = strtok(s, " ");
    while(p)
    {
        for(int i = 0; i < strlen(p); i++)
        {
            if(strchr(voc, p[i]))
                nr_voc++;
            else
                nr_con++;
        }
        if(nr_voc < nr_con)
        {
            exista = true;
            cout << p << '\n';
        }
        p = strtok(NULL, " ");
    }
    if(!exista)
    {
        cout <<"nu exista";
    }
}