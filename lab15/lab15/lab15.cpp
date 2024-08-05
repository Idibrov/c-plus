#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    system("chcp 1251");

    map<string, char> studentGrades;

    studentGrades["Ben"] = 'A';
    studentGrades["Sofy"] = 'B';
    studentGrades["Tom"] = 'C';
    studentGrades["Ron"] = 'D';

    cout << "Начальные оценки студентов:" << endl;
    for (const auto& student : studentGrades) {
        cout << student.first << " " << student.second << endl;
    }

    studentGrades["Tom"] = 'B';

    cout << "\nОбновленные оценки студентов:" << endl;
    for (const auto& student : studentGrades) {
        cout << student.first << " " << student.second << endl;
    }

    return 0;
}
