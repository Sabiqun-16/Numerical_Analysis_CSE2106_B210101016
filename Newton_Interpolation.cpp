#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0 || n==1) return 1;
    return n * fact(n-1);
}

double interpolation(vector<vector<double>> &a,double p,int n){
   double ans= a[0][0];
   double term1 = 1.0;
   double term2 = 0.0;

   for(int i = 1; i < n; i++){
    term1*=(p-(i-1));
    term2 = term1 / fact(i);
    ans+= term2*a[i][0];
   }
   return result;
}

int main ()
{
    cout << "EntertThe number of elemnts : ";
    int n;
    cin >> n;

    cout << "\nEnter the first number of X : ";
    double x;
    cin >> x;
    cout << endl;

    cout << "\nEnter the finding number of X : ";
    double x1;
    cin >> x1;
    cout << endl;

    cout << "\nEnter the difference - ";
    double diff;
    cin >> diff;
    cout << endl;

    vector<vector<double>> a(n,vector<double>(n));

    for(int i  = 0; i < 1; i++) {
        for(int j = 0; j <n; j++){
            cin >> a[i][j];
        }
    }
    int k= n-1;

    for(int i = 1; i < n; i++){
        cout << "DEL " << i << " " << endl;
        for(int j = 0; j < k; j++){
            a[i][j] = a[i-1][j+1] - a[i-1][j];
            cout<< fixed << setprecision(6) << a[i][j] << endl;
        }
        k = k - 1;
    }

    double p = (x1-x)/diff;

    cout << interpolation(a,p,n) << endl;

}
