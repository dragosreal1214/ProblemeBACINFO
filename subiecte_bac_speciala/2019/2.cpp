#include <iostream>
#include <cstring>

using namespace std;

char s[101], *p;
int n;
int main()
{
    cin.getline(s, 101);
    cin.get();
    cin >> n;
    p = strtok(s, " ");
    while(p)
    {
        if(strlen(p) == n)
        {
            cout << p << '\n';
        }
        p = strtok(NULL, " ");
    }
}