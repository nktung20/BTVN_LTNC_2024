#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
 int i1 = 4,i2;
double d1 = 4.0,d2;
string s1 = "HackerRank ",s2;

cin>>i2>>d2;
cin.ignore();
getline(cin,s2);

i1 += i2;
d1 += d2;
cout<<i1<<"\n";
cout<<fixed<<setprecision(1)<<d1<<"\n";
cout<<s1+s2;

    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}