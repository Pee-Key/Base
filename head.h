//
// Created by USER on 08.03.2020.
//

#ifndef BAZA3_HEAD_H
#define BAZA3_HEAD_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

struct Student {
    std::string Name;
    std::string Surname;
    std::string Sex;
    std::string Pesel_number;
    int Index_number;
};

struct Student_base {
    int amm = group.size();
    std::vector<Student> group;
};

enum operations {
    find_student = 1,
    add_student,
    remove_student,
    display_all_students,
    display_my_student,
    load_data,
    save_data,
    stop = 8
};


void func_display_student(std::vector<Student> &group);

void func_display_all_students(std::vector<Student> &group);

int func_find_student(std::vector<Student> &group, int searched_index);

void func_add_student(std::vector<Student> &group);

void func_remove_student(std::vector<Student> &group,int out);

void func_save_to_file(std::vector<Student> &group);

void func_load_from_file(std::vector<Student> &group);

#endif //BAZA3_HEAD_H
