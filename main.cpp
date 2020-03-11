#include "head.h"
#include <iostream>


using namespace std;

int main() {

    int operation;
    int searched_index;
    int ammount;
    int out;

    Student_base base;
    vector<Student> vec_group(0);
    vector<Student> *group = &vec_group;

    Student student1, student2, student3;

    student1.Name = "Edward";
    student1.Surname = "Bzyczek";
    student1.Sex = "Male";
    student1.Pesel_number = "12345678912";
    student1.Index_number = 264486;
    vec_group.push_back(student1);

    student2.Name = "Michal";
    student2.Surname = "Ostronski";
    student2.Sex = "Male";
    student2.Pesel_number = "54678912345";
    student2.Index_number = 278963;
    vec_group.push_back(student2);

    student3.Name = "Olga";
    student3.Surname = "Jablonska";
    student3.Sex = "Female";
    student3.Pesel_number = "45625815975";
    student3.Index_number = 258456;
    vec_group.push_back(student3);


    do {
        cout << "\n\nPlease, chose an operation:";
        cout << "\nFind student                      (1)"
                "\nAdd student                       (2)"
                "\nRemove student                    (3)"
                "\nDisplay all students              (4)"
                "\nDisplay my student                (5)"
                "\nLoad data                         (6)"
                "\nSave data                         (7)"
                "\nExit                              (8)" << endl;

        cout << "\nEnter number of operation: " << endl;
        cin >> operation;
        switch (operation) {
            case find_student:
                cout << "What incdex number are you asking for?" << endl;
                cin >> searched_index;
                cout << "Searched number is on position: " << func_find_student(*group, searched_index) << endl;
                break;
            case add_student:
                func_add_student(*group);
                break;
            case remove_student:
                cout<<"What student you want to remove?(by index number)"<<endl;
                cin>>out;
                func_remove_student(*group, out);
                break;
            case display_all_students:
                func_display_all_students(*group);
                break;
            case display_my_student:
                func_display_student(*group);
                break;
            case load_data:
                func_load_from_file(*group);
                break;
            case save_data:
                func_save_to_file(*group);
                break;
            default:
                cout << "End of programm" << endl;
                break;
        }
    } while (operation != stop);


    return 0;
}