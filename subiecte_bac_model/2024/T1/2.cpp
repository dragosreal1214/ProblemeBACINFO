#include <iostream>
#include <cstring>
using namespace std;
char s[101], *p;
char t[101];
int n;
int main()
{
    cin >> n;
    cin.get();
    cin.getline(s, 101);
    strcpy(t, s);
    p = strtok(s, " ");
    while (p)
    {
        if(strlen(p) < n)
        {
            cout << p <<" ";
        }
        p = strtok(NULL, " ");
    }
    cout << endl;
    p = strtok(t, " ");   
    while (p)
    {
        if(strlen(p) > n)
        {
            cout << p <<" ";
        }
        p = strtok(NULL, " ");
    } 
}