#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

double func(double x){
    return x*x*x-2*x*x-5;//Equation
}

void Bisection(double a,double b){
    if(func(a)*func(b)>=0){
        cout<<"Incorrect Assumption";
        return;
    }
    double c;
    while(b-a>=EPSILON){
        c=(a+b)/2;
        if(func(c)==0.0) break;
        else if(func(a)*func(c)<0.0) b=c;
        else if(func(a)*func(c)>0.0) a=c;
    }
    cout<<"The value of root is: "<<c;
}

int main()
{
    double a,b;
    cin>>a>>b;
    Bisection(a,b);
}
