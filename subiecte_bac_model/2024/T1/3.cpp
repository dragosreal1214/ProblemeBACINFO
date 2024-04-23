#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int n1, n2, n3, v[1001], max1 = 9, max2 = 9, max3 = 9, x;
int main()
{
    fin >> n1 >> n2 >> n3;
    while(fin >> x)
    {
        v[x]++;
    }
    for(int i = 1000; i >= 10; i--)
    {
        if(v[i] >= n1 && i > max1)
        {
            max1 = i;
        }
        else
        {
            if(v[i] >= n2 && i > max2 && i < max1)
            {
                max2 = i;
            }
            else
            {
                if(v[i] >= n3 && i > max3 && i < max2)
                {
                    max3 = i;
                }
            }
        }
    }
    if(max1 == 9 || max2 == 9 || max3 == 9)
    {
        cout << "nu exista";
    }
    else
    {
        cout << max1 << " " << max2 <<" " << max3;
    }
}