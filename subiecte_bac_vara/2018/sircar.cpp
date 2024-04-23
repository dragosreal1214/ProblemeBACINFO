#include<iostream>
#include<cstring>
using namespace std;
char s[101], c[101], t[101], a[2];
int main()
{
    cin >> s;
    cin.get();
    cin >> c;
    if(strlen(s) != strlen(c))
    {
        cout << "cod incorect";
    }
    else
    {
        for(int i = strlen(s); i > 0; i--)
        {
            if((c[i] - 48) % 2 == 0)
            {
                a[0] = s[i];
                strcat(t, a);
            }
        }
        a[0] = s[0];
        strcat(t, a);
        for(int i = 1; i < strlen(s); i++)
        {
            if((c[i] - 48) % 2 == 1)
            {
                a[0] = s[i];
                strcat(t, a);
            }
        }
        cout << t;
    }
}