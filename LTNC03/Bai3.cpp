#include <iostream>
#include <string>
using namespace std;

string caesarCipher(string s, int k) {
    for (int i = 0; i < int(s.size()); i++) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                s[i] = 'a' + (s[i] - 'a' + k) % 26; 
            } else {
                s[i] = 'A' + (s[i] - 'A' + k) % 26; 
            }
        }
    }
    return s;
}

int main() {
    int x;
    cin >> x;
    string s;
    cin.ignore();
    getline(cin, s);
    int k;
    cin >> k;
    cout << caesarCipher(s, k) << endl;
    return 0;
}