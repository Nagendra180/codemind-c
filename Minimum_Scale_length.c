#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int g = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        g = __gcd(arr[i],g);
    }
    cout << g;
}