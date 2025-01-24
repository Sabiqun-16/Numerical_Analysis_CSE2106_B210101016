#include<bits/stdc++.h>
using namespace std;

double h_cal(double h, int n) {
    double temp = h;
    for(int i = 1; i < n; i++) {
        temp *= (h + i);
    }
    return temp;
}

double fact(int n) {
    double fac = 1;
    for(int i = 2; i <= n; i++) {
        fac *= i;
    }
    return fac;
}

int main() {
    cout << "Enter the number of values: ";
    int n;
    cin >> n;

    cout << "Enter the values of x: ";
    double x[n];
    for(int i = 0; i < n; i++) cin >> x[i];

    cout << "Enter the values of y[n][0]: ";
    double y[n][n];
    for(int i = 0; i < n; i++) cin >> y[i][0];

    for(int j = 1; j < n; j++) {
        for(int i = n - 1; i >= j; i--) {
            y[i][j] = y[i][j-1] - y[i-1][j-1];
        }
    }

    cout << "\n********* Table **************\n";
    for(int i = 0; i < n; i++) {
        cout << setw(4) << x[i] << "\t";
        for(int j = 0; j < n - i; j++) {
            cout << setw(8) << y[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Enter a value to interpolate: ";
    double a;
    cin >> a;

    double sum = y[n-1][0];
    double h = (a - x[n-1]) / (x[1] - x[0]);

    for(int i = 1; i < n; i++) {
        sum += (h_cal(h, i) * y[n-1][i]) / fact(i);
    }

    cout << "The interpolated value at " << a << " is: " << sum << endl;
    return 0;
}
