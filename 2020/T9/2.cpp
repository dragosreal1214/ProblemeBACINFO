#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    struct cuvant
    {
        char cuv[20];
    }v[20];
    
    for(int i = 1; i < n; i++)
    {
        cin >> v[i].cuv;
    }
    char prefix[20];
    cin >> prefix;
    for(int i = 1; i < n; i++)
    {
        if(strcmp(v[i].cuv[strlen(v[i].cuv) ]))
    }
}