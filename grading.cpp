#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
Function completed by myself below is gradingStudents();
This function checks a students grade in a vector, and then applies a specific grading rule given to it. 
In this case, if a grade is greater than or equal to 38, it gets rounded to the nearest number divisible by 5.
dif is an integer that represents the differential between the grade and the next rounded up number. If this number is less
than 3, the grade gets rounded up
 */

vector<int> gradingStudents(vector<int> grades) {
    int m = grades.size();
    for(int i = 0; i < m; i++) {
        int dif = 5 - (grades[i] % 5);
        if (grades[i] >= 38) {
            if (dif < 3){
            grades[i] = grades[i] + dif;
            }
        }
    }
    return grades;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
