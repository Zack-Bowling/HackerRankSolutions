#include <bits/stdc++.h>

using namespace std;

/*
This is a function to convert standard time notation to military time notation. This one is alittle tricky but I
found a fun way to get it done. Start with .substr that lets you extract portions of the string at a time (substrings).
From there, find a standard way to convert the time. When displaying the time, I used setw and setfill to format the 
military time correctly. ostringstream builds a string in a more clean fashion
 */

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string minutes = s.substr(3, 2);
    string seconds = s.substr(6, 2);
    string meridiem = s.substr(8, 2); 

    if (meridiem == "AM") {
        if (hour == 12) hour = 0; 
    } else { // PM
        if (hour != 12) hour += 12;
    }

    ostringstream militaryTime;
    militaryTime << setw(2) << setfill('0') << hour << ":" << minutes << ":" << seconds;
    return militaryTime.str();
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
