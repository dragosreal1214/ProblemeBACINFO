#include <iostream>
#include <cstring>

using namespace std;

int v[25], g;
char s[251];

int main()
{
    cin.getline(s, 251);
    for(int i = 0; s[i]; i++)
    {
        if(s[i] != ' ')
            v[int(s[i]) - 'a']++;
    }
    for(int i = 0 ; i < 26; i++)
    {
        if(v[i] == 1)
        {
            g = 1;
            cout << char(i + 'a') <<" ";
        }
    }
    if(!g)
        cout << "nu exista";
}