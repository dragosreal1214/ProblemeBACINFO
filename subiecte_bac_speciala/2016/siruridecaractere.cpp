#include <iostream>
#include <cstring>

using namespace std;

struct cuvinte 
{
    char s[21];
}v[20];

int n, k;
char t[1001];

int main()
{
    cin >> n;
    cin.get();
    for(int i = 0; i < n; ++i)
    {
        cin >> v[i].s;
        cin.get();
    }
    cin >> k;
   for(int i = 0; i < n; ++i)
   {
        if(strlen(v[i].s) == k)
        {
            strcat(t, v[i].s);
            strcat(t, " ");
            strcpy(v[i].s, "A");
        }
   }
    for(int i = 0; i < n; ++i)
   {
        if(!(strchr(v[i].s, 'A')))
        {
            strcat(t, v[i].s);
            strcat(t, " ");
        }
   }
   t[strlen(t)] = '\0';
   cout << t;
}