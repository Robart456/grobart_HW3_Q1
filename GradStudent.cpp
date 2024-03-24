//
// Created by jmrob on 3/23/2024.
//
#include "GradStudent.h"

GradStudent::GradStudent() : Student() {}

GradStudent::GradStudent(std::string first, std::string last, int day, int month, int year, int credits)
        : Student(first, last, day, month, year, credits) {}

bool GradStudent::canGraduate() const {
    return numCredits >= 30;
}
