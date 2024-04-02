#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    set <int> s;
        
    while (n!=0) {
        int q1,q2;
        cin >> q1 >> q2;
        if (q1==1) s.insert(q2);
        else if (q1==2) s.erase(q2);
        else {
            set<int>::iterator s1=s.find(q2);
            if (s1!=s.end()) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        n--;
    } 
    
    return 0;
}



