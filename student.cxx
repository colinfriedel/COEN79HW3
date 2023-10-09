
#include <iomanip>
#include <iostream>

using namespace std;
#include "scuclass.h"

namespace coen79_hw3{
    //filled constructor
    student::student(string name, string curr_year, string major, int graduation_year, int start_year){ //consturctor
        this->name = name;
        this->curr_year = curr_year;
        this->major = major;
        this->graduation_year = graduation_year;
        this->start_year = start_year;
        this->id = id_counter++; //id = id_counter ;(then?); id_counter+=1
    }

    //default constructor
    student::student(){}

    //getter for id
    int student::getID(){
        return this->id;
    }

    //<< function
    ostream& operator<<(ostream& os, const student& s){

        cout << "Name: " << s.name << " Current Year: " << s.curr_year << endl;
        cout << "Major: " << s.major << "ID: " << s.id << endl;
        cout << "Start Year: " << s.start_year << " Graduation Year: " << s.graduation_year << endl;

        return os;
    }
}