//
// Created by USER on 11.03.2020.
//
#include "head.h"

using namespace std;

void func_save_to_file(std::vector<Student> &group){

    ofstream DataBase("C:\\Users\\USER\\CLionProjects\\po\\zd\\baza3\\DataBase.txt");

    for(int i=0;i<group.size();i++){
        DataBase<<group[i].Name<<endl;
        DataBase<<group[i].Surname<<endl;
        DataBase<<group[i].Sex<<endl;
        DataBase<<group[i].Pesel_number<<endl;
        DataBase<<group[i].Index_number<<endl;
    }
    DataBase.close();
}

void func_load_from_file(std::vector<Student> &group){
    Student student4;

    ifstream DataBase("C:\\Users\\USER\\CLionProjects\\po\\zd\\baza3\\DataBase.txt");

    if(DataBase.is_open()){
        while (DataBase.eof()){
            group.push_back(student4);
            int i = group.size()-1;

            DataBase>>group.at(i).Name;
            DataBase>>group.at(i).Surname;
            DataBase>>group.at(i).Sex;
            DataBase>>group.at(i).Pesel_number;
            DataBase>>group.at(i).Index_number;
        }
        DataBase.close();
    }else{
        cout<<"ERROR. CAN'T OPEN FILE"<<endl;
    }
}