#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; cin >> n;
    map <string,int> mp;
        
    while (n!=0) {
        int q1;
        string name; int mark;
        cin >> q1;
        if (q1==1) {
            cin >> name >> mark;
            auto it = mp.find(name);
            if (it != mp.end()) {
            mp[name]+= mark;
            }
            else
            mp[name]=mark;
        }
        else if (q1==2) {
            cin >> name;
            mp.erase(name);
        }
        else {
            cin >> name;
            if ( mp.count(name)!=0) cout << mp[name] << endl;
            else cout << "0" << endl;
        }
        n--;
    } 
    return 0;
}



