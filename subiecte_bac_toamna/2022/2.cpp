#include <iostream>
#include <cstring>

using namespace std;

char s[51], voc[] = "aeiou";

int main()
{
    cin >> s;
    for(int i = 0; s[i]; i++)
    {
        if(strchr(voc, s[i]) == 0)
        {
            while(strchr(voc, s[i]) == 0)
            {
                s[i]--;
            }
        }
    }
    cout << s;
}