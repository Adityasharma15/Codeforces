#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
#define ll long long
using namespace std;
double cal_sin(double n)
{
    double accuracy = 0.000001, denominator, sinx, sinval;

    // Converting degrees to radian
    n = n * (3.142 / 180.0);

    double x1 = n;

    // maps the sum along the series
    sinx = n;

    // holds the actual value of sin(n)
    sinval = sin(n);
    double i = 1;
    do
    {
        denominator = 2 * i * (2 * i + 1);
        x1 = -x1 * n * n / denominator;
        sinx = sinx + x1;
        i = i + 1;
    } while (accuracy <= fabs(sinval - sinx));
    return sinx;
}
double cal_cos(double n)
{
    double accuracy = 0.000001, x1, denominator, cosx, cosval;

    // Converting degrees to radian
    n = n * (3.1415926535 / 180.0);

    x1 = 1;

    // maps the sum along the series
    cosx = x1;

    // holds the actual value of sin(n)
    cosval = cos(n);
    double i = 1;
    do
    {
        denominator = 2 * i * (2 * i - 1);
        x1 = -x1 * n * n / denominator;
        cosx = cosx + x1;
        i = i + 1;
    } while (accuracy <= fabs(cosval - cosx));
    return cosx;
}
int main()
{
   ll t;
   cin>>t;
   while(t--)

   {
 		ll a;
		cin>>a;
    a= 2*a;
    double value = 3.1415926535/a;
    
		double d=sin(value);
    double ans=1/d;
    double x=cos(value);
    double anss = ans*x;

    cout<< fixed << setprecision(9)<<ans*x<<endl;
   }
}
