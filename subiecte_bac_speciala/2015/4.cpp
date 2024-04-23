#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");

int main()
{
    int gpar = 1, gimpar = 1;
    int x, par = 0, impar = 1000000000;
    while(fin >> x && gpar && gimpar)
    {
        if(x % 2 == 0)
        {
            if(x >= par)
                par = x;
            else
                gpar = 0;
        }
        else
        {
            if(x <= impar)
                impar = x;
            else
                gimpar = 0;
        }


    }
    if(!gpar || !gimpar) 
        cout << "NU";
    else    
        cout << "DA";
    
}