#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int x,y;
      cin >> x >>y;
      int n;
      vector<vector<int>> v(x);
      for (int i=0;i<x;i++) {
          cin >> n;
          for (int j=0;j<n;j++) {
              int k;
              cin >> k;
              v[i].push_back(k);
            //   cin >> v[j];
      }
      }
      for (int i = 0; i < y; ++i){
          int a, b;
          cin >> a >> b;
          cout << v[a][b] << endl;
      }
    
    return 0;
}