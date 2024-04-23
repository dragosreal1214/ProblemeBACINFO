#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[11];
    char vocale[] = "aeiou";
    int n, k;
    cin >> n >> k;
    int nr = 0;
    for(int i = 1; i <= n && nr < k; i++)
    {
        cin >> s;
        if(strchr(vocale, s[strlen(s) - 1]))
        {
            nr++;
            cout << s << endl;
        }
    }
}
