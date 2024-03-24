//
// Created by jmrob on 3/23/2024.
//


#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person {
public:
    Student();
    Student(std::string first, std::string last, int day, int month, int year, int credits);
    void addCredits(int newCredits);
    int getCredits() const;
    bool canGraduate() const;

protected:
    int numCredits;
};
#endif
