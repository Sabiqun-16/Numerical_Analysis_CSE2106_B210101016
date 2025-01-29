#include<bits/stdc++.h>
using namespace std;

#define f(x) (pow(x,3)-3*x-5)
#define df(x) (3*x*x-3)

int main(){
    double x0,e=0.001;
    cin>>x0;

    double x,fx,dfx,f_new;
    int c=0;

    fx=f(x0);
    dfx=df(x0);
    f_new = fx;

    while(abs(f_new)>e){
        x=x0-(fx/dfx);
        f_new=f(x);
        c++;
        cout<<c<<": f(x): "<<f_new<<endl;

        x0=x;
        fx=f_new;
        dfx=df(x0);
    }

    cout<<"\nThe root is: "<<x<<endl;
}
