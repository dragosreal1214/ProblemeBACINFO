#include <iostream>
#include <cstring>

using namespace std;

char s[101], cs[101], voc[] = "aeiou", a[2];

int main()
{
    int gvoc = 0;
    cin >> s;
    for(int i = 0; s[i]; ++i)
    {
        a[0] = s[i];
        if(strchr(voc, s[i]))
        {
            gvoc = 1;
            strcat(cs, a);
        }
        if(s[i] == 'm')
            strcat(cs, a);
    }
    if(gvoc)
        cout << cs;
    else
        cout << "nu exista";
}