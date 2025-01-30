#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

double f(double x){
    return x*x*x-3*x-5.0;//Equation
}

double df(double x){
    return 3*x*x-3;
}

void newtonRaphson(double x){
    double h=f(x)/df(x);
    while(abs(h)>=EPSILON){
        h=f(x)/df(x);
        x=x-h;
    }
    cout<<"The value of root is: "<<x;
}

int main()
{
    double x0;
    cin>>x0;
    newtonRaphson(x0);
}
