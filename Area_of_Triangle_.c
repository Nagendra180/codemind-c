#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double s = (a+b+c)/2;
    double ans = (double)(sqrtl(s*(s-a)*(s-b)*(s-c)));
    cout << setprecision(2) << fixed; 
    cout << ans; 
}