#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    cin.getline(s, 101);
    int nr = 0;
    char *p = strtok(s, " ");
    while(p)
    {
        if(!strchr(p, ',') && p[0] > '0' && p[0] <= '9')
            nr++;
        p = strtok(NULL, " ");
    }
    cout << nr;
}