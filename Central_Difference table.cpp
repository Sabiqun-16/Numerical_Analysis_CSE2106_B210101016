#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,h;
    cout<<"Enter the point x: ";
    cin>>x;

    cout<<"Enter the step size  h: ";
    cin>>h;

    double f_Plus=(x+h)*(x+h);
    double f_Mlus=(x-h)*(x-h);

    double central=(f_Plus-f_Mlus)/2*h;

    cout<<"The derivative at x= "<<x<<" is approximately: "<<central;
}
