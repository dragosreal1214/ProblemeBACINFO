#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.in");
int max1, max2, max3;
int main()
{
    int x;
    while(fin >> x)
    {
        if(x % 10 == 0 && x / 10 % 10 == 2)
        {
            if(x > max1)
                max1 = x;
            if(x > max2 && x < max1)
                max2 = x;
            if(x > max3 && x < max2)
                max3 = x;
        }
    }
    cout << max3 << " " << max2 <<" " << max1;
}