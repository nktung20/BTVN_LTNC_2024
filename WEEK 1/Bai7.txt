#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int zerocnt=0,poscnt=0,negcnt=0;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        if (arr[i]==0) zerocnt++;
        else if (arr[i]>0) poscnt++;
        else negcnt++;
    }
    cout << setprecision(6) << fixed << 1.00*poscnt/n<< endl;
     cout << setprecision(6) << fixed << 1.00*negcnt/n << endl;
      cout << setprecision(6) << fixed << 1.00*zerocnt/n << endl;
}
