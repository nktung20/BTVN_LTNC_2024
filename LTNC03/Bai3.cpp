

#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s) {
    string hour = s.substr(0, 2);
    int hh = stoi(hour);
    string meridian = s.substr(8, 2);

    if (meridian == "PM" && hh != 12) {
        hh += 12;
    } else if (meridian == "AM" && hh == 12) {
        hh = 0;
    }

    string ans = (hh < 10 ? "0" : "") + to_string(hh) + s.substr(2, 6);
    return ans;
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
