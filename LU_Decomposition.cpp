#include<bits/stdc++.h>
using namespace std;


void luDecomposition(double a[100][100],int n){
    double L[100][100] = {0}, U[100][100]= {0};
    for(int i=0;i<n;i++){
        for(int k=i;k<n;k++){
            double sum = 0;
            for(int j=0;j<n;j++)
                sum+=L[i][j]*U[j][k];
            U[i][k]=a[i][k]-sum;
        }

        for(int k=i;k<n;k++){
            if(i==k) L[i][i]=1;
            else{
                double sum=0;
                for(int j=0;j<i;j++)
                sum+=L[k][j]*U[j][i];
                if(U[i][i]==0){
                  cout<<"\nLU decomposition cannot proceed.";
                  return;
                }

                L[k][i]=(a[k][i]-sum)/U[i][i];
            }
        }
    }
    cout<<"\nLower Triangular Matrix(L):\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<setw(8)<<L[i][j]<< " ";
        cout<<endl;
    }
    cout<<"\nUpper Triangular Matrix (U):\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<setw(8)<<U[i][j]<< " ";
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;

    double a[100][100];
    cout<<"Original Matrix (A): \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    luDecomposition(a,n);

    return 0;
}

