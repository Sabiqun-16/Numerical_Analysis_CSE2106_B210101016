#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

double func(double x){
    return x*x*x-x*x+2;//Equation
}

double derivativeFunc(double x){
    return 3*x*x-2*x;
}

void newtonRaphson(double x){
    double h=func(x)/derivativeFunc(x);
    while(abs(h)>=EPSILON){
        h=func(x)/derivativeFunc(x);
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
