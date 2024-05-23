#include <iostream>
using namespace std;
int main() {
    char letters[] = {'a', 'b', 'c', 'd'};
    int n = 4; 
    int k = 3; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < n; l++) {
                cout << letters[i] << letters[j] << letters[l] << endl;
            }
        }
    }

    return 0;
}