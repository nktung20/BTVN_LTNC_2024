#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    for (int i=0;i<x;i++) {
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    long sum1=0;
    long sum2=0;
    for (int i=1;i<n;i++) {
        sum2+=a[i];
    }
    int  bien=0;
    for (int i=0;i<n;i++) {
        if (sum1==sum2) {
        cout << "YES" << endl;
        bien=1;
        break; }
        sum1+=a[i];
        sum2-=a[i+1];
    }
    if (bien==0) cout << "NO" << endl; 
    }
}
