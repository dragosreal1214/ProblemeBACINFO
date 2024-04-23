#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int x, sum;
int main()
{
    fin >> x;
    sum = x;
    while(fin >> x)
    {
        if(sum + x > x)
        {
            sum += x;
        }
        else
            if(sum + x < x)
            {
                sum = x;
            }
    }
    cout << sum;
}