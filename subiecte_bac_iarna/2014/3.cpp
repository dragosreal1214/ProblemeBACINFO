#include <iostream>

using namespace std;

int esteprim(int a);
void prime(int x, int y);

int main()
{
    prime(9, 13);
}

int esteprim(int a)
{
    if(a < 2)
        return 0;
    else
        for(int i = 2; i * i <= a; i++)
            if(a % i == 0)  
                return 0;
    return 1;
}


void prime(int x, int y)
{
    if(x > y)
    {
        int c = y;
        y = x;
        x = c;
    }
    for(int i = x; i <= y; i++)
        if(esteprim(i)) 
            cout << i <<" ";

}