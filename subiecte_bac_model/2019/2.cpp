#include <iostream>
#include <cstring>

using namespace std;

char voc[] = "aeiou", s[101], *p, cuv[4]; 
int e1, e2;

int main()
{
    cin.getline(s, 101);
    cuv[2] = s[strlen(s) - 1];
    p = strtok(s, " ");
        for(int i = 0; p[i]; ++i)
            if(!strchr(voc, p[i]))
            {
                e1 = 1;
                cuv[0] = p[i];
                break;
            }    
    p = strtok(NULL, " ");
    for(int i = 0; p[i]; ++i)
    {
        if(strchr(voc, p[i]))
        {
            e2 = 1;
            cuv[1] = p[i];
            break;
        }
    }
    if(e1 && e2)   
        cout << cuv;
    else
        cout << "nu exista";
}
