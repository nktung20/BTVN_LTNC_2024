#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort (arr,arr+n);
    int cnt=1;
    vector <int> v;
    for (int i=0;i<n-1;i++) {
        if (arr[i]==arr[i+1] ) cnt++;
        else { v.push_back(cnt); cnt=1;}
    }
    v.push_back(cnt);
    sort (v.begin(),v.end());
    cout << n-v[v.size()-1];
}