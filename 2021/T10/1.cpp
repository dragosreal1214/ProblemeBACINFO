#include<iostream>

using namespace std;

int sumadiv(int a);
bool armonie(int x, int y);

int main()
{
    cout << armonie(8,12);
}

bool armonie(int x, int y)
{
    int sdivx = sumadiv(x);
    int sdivy = sumadiv(y);
    if(sdivx < sdivy)
    {
        if(sdivx < x + y && x + y < sdivy)
        {
            return 1;
        }
    }
    else
    {
        swap(sdivx, sdivy);
        if(sdivx < x + y && x + y < sdivy)
        {
            return 1;
        }
    }
    return 0;
}

int sumadiv(int a)
{
    int s = 0;
    for(int i = 1; i * i <= a; i++)
    {
        if(a % i == 0)
        {
            s = s + i + a / i;
        }
        if(i * i == a)
        {
            s -= i;
        }
    }
    return s;
}