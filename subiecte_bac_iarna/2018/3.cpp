#include <iostream>

using namespace std;

void maxim(int a, int &b);

int main()
{
    int a;
    maxim(4370, a);
    cout << a;
}

void maxim(int a, int &b)
{
    int v[5] = {0};
    int l = 0;
    while(a)
    {
        v[l] = a % 10;
        a /= 10;
        l++;
    }
    for(int i = 0; i < l; i++)
    {
        for(int j = i + 1; j < l; j++)
        {
            if(v[i] < v[j])
                swap(v[i], v[j]);
        }
    }   
    for(int i = 0; i < l; i++)
    {
        b = b * 10 + v[i];
    }
}