#include "human.h"
#include "student.h"
#include "teacher.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 1251");
    vector<int> student_scores = { 4, 3, 2, 5, 4 };

    human* student1 = new student("Иванов", "Иван", "Иванович", student_scores);
    cout << "Студент: " << student1->get_full_name() << endl;
    cout << "Средний балл: " << student1->get_average_score() << endl;

    unsigned int teacher_work_time = 40;
    human* teacher1 = new teacher("Сергеев", "Сергей", "Сергеевич", teacher_work_time);
    cout << "Преподаватель: " << teacher1->get_full_name() << endl;
    cout << "Количество часов: " << teacher1->get_work_time() << endl;

    delete student1;
    delete teacher1;

    return 0;
}
