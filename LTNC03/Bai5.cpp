#include <iostream>
using namespace std;
string hackerrankInString(string s) {
string s1 = "hackerrank";
int n1=s1.size();
int j=0;
int count=0;
int n=s.size();
for(int i=0;i<n;i++){
    if(s[i]==s1[j]){
        count++;
        j++;
    }}
    if(count==n1)
    return "YES";
    else 
    return "NO";         ;

}

int main()
{
    string s;
    cin >> s;
    cout << hackerrankInString(s);

    return 0;
}