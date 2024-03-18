#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//2 cach khac nhau, cach comment TLE

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[n];
    int b[n+1];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    // int cnt=0;
    for (int i=0;i<n+1;i++) cin >> b[i];
    // for (int i=0;i<n+1;i++) {
    //     cnt=0;
    //     for (int j=0;j<n;j++) {
    //         if (b[i]!=arr[j]) cnt++;
    //     }
    //     if (cnt==n){
    //         cout << b[i];
    //         return 0;
    //     } 
    // }
    sort(a, a + n);
    sort(b, b + n + 1);
    for (int i = 0; i < n; ++i){
        if (a[i] != b[i]){
            cout << b[i];
            return 0;
        }
    }
    cout << b[n];
    return 0;
}
