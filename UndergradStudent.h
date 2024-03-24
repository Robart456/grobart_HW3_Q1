//
// Created by jmrob on 3/23/2024.
//
#ifndef UNDERGRADSTUDENT_H
#define UNDERGRADSTUDENT_H

#include "Student.h"

class UndergradStudent : public Student {
public:
    UndergradStudent();
    UndergradStudent(std::string first, std::string last, int day, int month, int year, int credits);
    bool canGraduate() const override;
};

#endif // UNDERGRADSTUDENT_H
