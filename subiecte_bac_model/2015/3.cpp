#include <iostream>

using namespace std;

void subperfect(int a, int b)
{
    int g = 0;
    for(int i = b; i >= a; --i)
    {
        int s = 0;
        for(int d = 2; d * d <= i; d++)
        {
            if(i % d == 0)
            {
                s = s + d + i / d;
            }
            if(d * d == i)
            {
                s -= d;
            }
        }
        if(i < s)
        {
            g = 1;
            cout << i <<" ";
        }
   }
   if(!g)
   {
        cout << "nu exista";
   }
}

int main()
{
    subperfect(10, 20);
}