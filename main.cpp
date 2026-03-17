#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string status, gender, major;
    double factor = 0.1;
    double scholarship = 10000.0;

    // Use the following input format: <status> <gender> <major>
    // student female cs ; or student male math ; or nonstudent male cs ; etc.
    cin >> status >> gender >> major;

    // TODO: Determine factor based on status, gender, and major using if statements

    double finalScholarship = scholarship * factor;

    cout << setprecision(2) << fixed;
    cout << "Decided Factor: " << factor << ", Final Scholarship Amount: " << finalScholarship << endl;

    return 0;
}
