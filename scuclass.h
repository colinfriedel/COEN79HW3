//HEADER GAURD
#ifndef RAND_NUM_GEN_H
#define RAND_NUM_GEN_H

#include <iostream>


namespace coen79_hw3{

    class student{
        std::string name;
        std::string curr_year;
        std::string major;
        int graduation_year;
        int start_year;
        int id;
        static int id_counter;

        public:
            //constructor also increments id
            student(std::string name, std::string curr_year, std::string major, int graduation_year, int start_year); //consturctor
            //default constructor
            student();
            //getter for id
            int getID();

        friend std::ostream& operator<<(std::ostream& os, const student& s);
    };

    class scuclass{
        student students[35];
        static int arr_id;

        public:
            std::string className;

            scuclass(std::string className);
            scuclass();//empty constructor??

            void addStudent(student &s);
            void erase(int delete_id);
            void list(void);
        
        friend std::ostream& operator<<(std::ostream& os, scuclass& c);
    };

}



#endif