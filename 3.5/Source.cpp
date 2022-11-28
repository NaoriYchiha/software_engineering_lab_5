#include<iostream>
#include <cmath>
#include<fstream>

using namespace std;

int Only();
int Hope();
double UR(int x,int n);
// Prototype //

int main()
{
   
    setlocale(LC_ALL, "Rus");
    int n = Only();
    int x =  Hope();
    double VID = UR(x, n);
    
}


int Only()// input n //
{
    int n;
    cout << "¬ведите n: ";
    cin >> n;
    return n;

}

int Hope()// input x //
{
    int x;
	cout << "¬ведите х: ";
	cin >> x;
	return x;
}


double UR(int x, int n) 
{
    setlocale(LC_ALL, "Rus");
    double i, y, j, p = 0;

    if (x > 0)// Calculation for x greater than nought //
    {
     
        y = 1;
        for (i = 1; i <= n; i++)
        {
            y *= ((1 / x) - (1 / i)) +777;
        }
        std::cout << "ќбласть значений:" << y;
    }
    else// Calculation for the rest x  //
    {
        y = 0;
        for (i = 0; i <= n - 1; i++)
        {
            for (j = 0; j <= n - 1; j++)
            {
                p += 1 / (x - i + x * j) +777;
            }
            y = y + p;
            
        }
        std::cout << "ќбласть значений:" << y;
    }
    return y;
}

