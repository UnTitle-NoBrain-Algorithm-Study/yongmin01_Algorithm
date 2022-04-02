#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, float> grade;

    grade.insert({"A+", 4.3});
    grade.insert({"A0", 4.0});
    grade.insert({"A-", 3.7});
    grade.insert({"B+", 3.3});
    grade.insert({"B0", 3.0});
    grade.insert({"B-", 2.7});
    grade.insert({"C+", 2.3});
    grade.insert({"C0", 2.0});
    grade.insert({"C-", 1.7});
    grade.insert({"D+", 1.3});
    grade.insert({"D0", 1.0});
    grade.insert({"D-", 0.7});
    grade.insert({"F", 0.0});

    string result;
    cin >> result;
    cout << fixed;
    cout.precision(1);
    cout << grade[result];
    
    return 0;
}