#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    // Extract the hours, minutes, seconds, and the AM/PM modifier
    string hh = s.substr(0, 2);
    string mm_ss = s.substr(2, 6); // Includes the colons like ":45:54"
    string am_pm = s.substr(8, 2);
    
    int hour = stoi(hh);
    
    if (am_pm == "AM") {
        // 12 AM becomes 00 in 24-hour format
        if (hour == 12) {
            hh = "00";
        }
    } else if (am_pm == "PM") {
        // 12 PM stays 12, other PM hours need 12 added to them
        if (hour != 12) {
            hour += 12;
            hh = to_string(hour);
        }
    }
    
    return hh + mm_ss;
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
