#include <bits/stdc++.h>
using namespace std;
int numGenerate() {
     return rand() % 100 + 1;
}
int guess() {
    int x;
    cin >> x;
    return x;
}
string displayStatus(int a, int b) {
    if (a==b) return "You won !!!";
    else if (a>b) return "Your guess is too big";
    else return "Your guess is too small";
}
bool playAgain() {
    cout << "Wanna play again ?   Y/N" << endl;
    char x; cin >> x;
    if (x=='Y') return true;
    return false;
}
void play() {
    srand(time(0));
    int number;
    int answer=numGenerate();
    do {
        cout << "Enter your guess: ";
         number=guess();
        cout << displayStatus(number,answer) << endl;
    }
    while (number!=answer);
}
int main() {
    do {
        play();
    }
    while (playAgain());
}
