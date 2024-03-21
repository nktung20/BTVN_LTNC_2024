/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool checkboi (int x,int a[],int n) {
    int cnt=0;
    for (int i=0;i<n;i++) {
        if (x%a[i]==0) cnt++;
    }
    if (cnt==n) return true;
    return false;
}
bool checkuoc(int x,int a[],int n) {
    int cnt=0;
    for (int i=0;i<n;i++) {
        if (a[i]%x==0) cnt++;
    }
    if (cnt==n) return true;
    return false;
}
int main()
{
    int m,n;
    cin >> m >> n;
//vector <int> a; vector <int> b;
int a[m+1],b[n+1];
    for (int i=0;i<m;i++) {
        cin >> a[i];
    }
    for (int i=0;i<n;i++) {
        cin >> b[i];
    }
    int cnt=0;
    for (int i=a[m-1];i<=b[0];i++) {
        if (checkboi (i,a,m) && checkuoc(i,b,n)) cnt++;
    }
    cout << cnt;

    return 0;
}
