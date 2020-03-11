//
// Created by USER on 08.03.2020.
//
#include "head.h"

using namespace std;

void func_display_student(vector <Student> &group) {
    Student student_my;
    cout << "Name: " << endl;
    cin>> student_my.Name;
    cout << "Surname: "<< endl;
    cin>>student_my.Surname;
    cout << "Sex: " << endl;
    cin>>student_my.Sex;
    cout << "Pesel number: "<< endl;
    cin>>student_my.Pesel_number;
    cout << "Index number: "<< endl;
    cin>>student_my.Index_number;
    cout << endl;
    cout<<"Name: "<<student_my.Name<<endl<<"Surname: "<<student_my.Surname<<endl<<"Sex: "<<student_my.Sex<<endl<<"Pesel number: "<<student_my.Pesel_number<<endl<<"Index number: "<<student_my.Index_number<<endl;
}

void func_display_all_students(vector <Student> &group) {
   for(int i=0;i<group.size();i++){
       cout << "Name: " << group[i].Name << endl;
       cout << "Surname: " << group[i].Surname << endl;
       cout << "Sex: " << group[i].Sex << endl;
       cout << "Pesel number: " << group[i].Pesel_number << endl;
       cout << "Index number: " << group[i].Index_number << endl;
       cout << endl;
   }
}