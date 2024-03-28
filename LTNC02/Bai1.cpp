#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

long findDigits(long n) { 
long temp=0;
long cnt=0;
long so=n;
    while(so!=0) {
        temp=so%10;
        if(temp!=0) {
        if(n%temp==0) cnt++;
        }
        so/=10;
    }
    return cnt;

}

int main() {
    int x;
    cin >> x;
    for (int i=0;i<x;i++) {
    long n;
    cin >> n;
    cout << findDigits (n)<< endl;
    }
}
