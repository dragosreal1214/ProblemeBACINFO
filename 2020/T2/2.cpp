#include<iostream>
#include<cstring>
using namespace std;
char s[100], ss[100];
int main()
{
    cin.getline(s, 100);
    char* p = strtok(s, " ");
    while ((p))
    {
        if(p[0] != '-')
        {    
            strcat(ss, p);
            strcat(ss, " ");
        }
        p = strtok(NULL, " ");
    }
    cout << ss;
}