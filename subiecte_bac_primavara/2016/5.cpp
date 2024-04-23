#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int s[101], t[101], a[2] = "\0";
    cin.getline(s, 101);
    cin.get();
    cin.getline(t, 101);
    int l = strlen(s);
    int nr = 0;
    for(int i = 0; s[i]; i++)
    {
        if(s[i] != ' ')
        {
            a[0] = s[i];
            if(stchr(t, a));
            {
                nr++;
                
            }
        }
        else
            l--;
    }
}