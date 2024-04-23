#include<iostream>
using namespace std;
void divizor(int a, int b, int k, int &nr);
int main()
{
    int a;
    divizor(3,50,4,a);
    cout << a;
}
void divizor(int a, int b, int k, int &nr)
{
    nr = 0;
    for(int i = a; i <= b; i++)
    {
        if(i % k == 0 && i % 10 == k)
        {
            nr++;
        }
    }
}