// 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int a;
    vector <int> v;
    for (int i=0;i<n;i++) {
        cin >> a ;
        v.push_back(a);
    }
    int qn;
    cin >> qn;
    int x;
    while(qn--) {
        cin >> x;
        int val=lower_bound(v.begin(),v.end(),x)-v.begin();
        if (x==v[val]) {
            cout << "Yes " << (val+1) << endl;
        }
        else {cout << "No " << (val+1) << endl;}
        }
}