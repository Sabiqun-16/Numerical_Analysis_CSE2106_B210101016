#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return (x*x*x) - (2 *x) - 5;
}

double bisection( double a,double b,double e)
{


    while(1)
    {
    double c = (a+b) / 2.0;
        if (f(c) == 0 || abs(f(c)) <=e) return c;

      if(f(c) < 0) a = c;
      if(f(c) > 0) b = c;
    };
}

int main ()
{
    cout << "Enter The Interval: ";
    double a,b;
    cin >> a >> b;
    cout << endl;

    cout << "Enter The Tolerance: ";
    double e;
    cin >> e;
    cout << endl;

    double ans = bisection(a,b,e);

    cout << fixed << setprecision(4) << ans << endl;


}
