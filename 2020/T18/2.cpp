#include <iostream>
#include <cstring>

using namespace std;

struct cuvinte 
{
    char s[21];
}v[20];

int n, k;

int main()
{
    cin >> n >> k;
    cin.get();
    for(int i = 0; i < n; i++)
    {   
        cin >> v[i].s;
        cin.get();
    }    
    for(int i = 0; i < n; i++)
    {
        if(i == k - 1)
            i++;
        int poz = strlen(v[i].s) - strlen(v[k - 1].s);
        if(strcmp(v[i].s + poz, v[k - 1].s) == 0)
            cout << v[i].s <<" ";
    }
}