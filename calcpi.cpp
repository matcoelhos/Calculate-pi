#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double atang(double x, int iterations)
{
    double ans = 0.0;
    for (int i = 0; i <= iterations; i++)
    {
        ans += (pow(-1,i)/(2*i + 1))*(pow(x,(2*i+1)));
    }
    return ans;
}

int main(int argc, char * argv[])
{
    double pi = 16*atang(1./5.,1000000) - 4*atang(1./239., 1000000);
    printf ("\n%.51f\n", pi);
    return 0;
}
