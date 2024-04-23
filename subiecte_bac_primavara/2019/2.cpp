#include <iostream>
#include <cstring>

using namespace std;

char s[51], ss[51], *p;

int main()
{
    cin.getline(s, 51);
    p = strtok(s, " ");
    while(p)
    {
        if(strchr(p, '.'))
        {
            if(p[0] == 'C')
                strcat(ss, "COELGIUL ");
            if(p[0] == 'L')
                strcat(ss, "LICEUL ");
            if(p[0] == 'T')
                strcat(ss, "TEORETIC ");   
            if(p[0] == 'N')
                strcat(ss, "NATIONAL ");        
        }
        else
        {
            strcat(ss, p);
            strcat(ss, " ");
        }
        p = strtok(NULL, " ");
    }
    cout << ss;
}