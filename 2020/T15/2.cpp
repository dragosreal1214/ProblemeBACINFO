#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    cin.getline(s, 101);
    char vocale[] ="aeiou";
    int nr = 0;
    char *p = strtok(s, " ");
    while(p)
    {
        int nrvoc = 0, nrcon = 0;
        for(int i = 0; i < strlen(p); i++)
        {
            if(strchr(vocale, p[i]))
            {
                nrvoc++;
            }
            else
            {
                nrcon++;
            }
        }
        if(nrcon == nrvoc)
        {
            nr++;
        }
        p = strtok(NULL, " ");
    }
    cout << nr;
}
