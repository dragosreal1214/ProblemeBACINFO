#include<iostream>
#include<cstring>
using namespace std;
char cuv1[] ="FAMILIA", cuv2[] = "GENUL", cuv3[] = "SPECIA", s[101], t[101], a[2]; 
char *p;
int main()
{
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p)
    {
        if(p[strlen(p) - 1] == '.')
        {
            if(p[0] == cuv1[0])
            {
                
            }
        }
        p = strtok(NULL, " ");
    }
}