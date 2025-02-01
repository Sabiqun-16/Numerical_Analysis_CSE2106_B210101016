#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;

    double x[n];
    double y[n][n];

    for(int i=0;i<n;i++){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        cout<<"y["<<i<<"][0]=";
            cin>>y[i][0];
    }

    for(int i=1;i<n;i++){
        for(int j=n-1;j>=i;j--){
            y[j][i]=y[j][i-1]-y[j-1][i-1];
        }
    }
    cout<<"Backward Difference Table : \n";
    for(int i=0;i<n;i++){
        cout<<x[i];
        for(int j=0;j<n-i;j++){
            cout<<"\t"<<fixed<<setprecision(5)<<y[i][j];
        }
        cout<<endl;
    }
return 0;
}
