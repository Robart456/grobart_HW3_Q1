//
// Created by jmrob on 3/23/2024.
//
#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H

#include "Student.h"

class GradStudent : public Student {
public:
    GradStudent();
    GradStudent(std::string first, std::string last, int day, int month, int year, int credits);
    bool canGraduate() const override;
};

#endif // GRADSTUDENT_H
