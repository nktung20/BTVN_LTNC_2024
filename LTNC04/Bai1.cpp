#include <bits/stdc++.h>

using namespace std;



double pageCount(double n, double p) {
    double a,b;
    if (fmod(p,2)==0) b=(p-1.0)/2+0.5;
    else b=(p-1.0)/2;
    if (fmod(n,2)==0 && fmod(p,2)!=0) a=(n-p)/2.0 +0.5 ;
    else if (fmod(n,2)!=0 && fmod(p,2)==0) a=(n-p)/2.0-0.5; 
    else a=(n-p)/2.0;
    if (a>=b) return b ;
    else return a;
     

}

int main()
{
    double n,p;
    cin >> n >> p;
    cout << pageCount(n,p);

    return 0;
}

