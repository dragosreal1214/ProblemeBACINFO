#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.in");
int main()
{
    int x;
    int min1 = 9999999;
    int min2 = 9999999;
    int min3 = 9999999;
    while(fin >> x)
    {
        if(x % 10 == 0 && x / 10 % 10 == 2)
        {
            if(x < min1)
            {
                min1 = x;
            }
            else
            {
                if(x < min2 && x > min1)
                {
                    min2 = x;
                    min3 = min2;
                }
                else
                {   
                    if(x < min3 && x > min2)
                    {
                        min3 = x;
                    }
                }
            }
        }
    }
    cout << min1 <<" " << min2 <<" " << min3;
}