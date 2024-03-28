#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    string c=a+b;
    cout << c << endl;
    char d;
    d=a[0];
    a[0]=b[0];
    b[0]=d;
    cout << a << " " << b;
    
  
    return 0;
}