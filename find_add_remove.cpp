//
// Created by USER on 08.03.2020.
//
#include "head.h"

using namespace std;

int func_find_student(std::vector<Student> &group, int searched_index) {

    int student_position = -1;
    for (int i = 0; i < group.size(); i++) {
        if (group[i].Index_number == searched_index) {
            student_position = i+1;
            return student_position;
        }
    }
    return student_position;
}

void func_add_student(std::vector<Student> &group) {
    Student student;
    cout << "Name: " << endl;
    cin>> student.Name;
    cout << "Surname: "<< endl;
    cin>>student.Surname;
    cout << "Sex: " << endl;
    cin>>student.Sex;
    cout << "Pesel number: "<< endl;
    cin>>student.Pesel_number;
    cout << "Index number: "<< endl;
    cin>>student.Index_number;
    cout << endl;

    group.push_back(student);
}

void func_remove_student(std::vector<Student> &group, int out) {
    for (int i = 0; i < group.size(); i++) {
        if (group[i].Index_number == out) {
            group.erase(group.begin() + i);
        }
    }
}
