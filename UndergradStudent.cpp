//
// Created by jmrob on 3/23/2024.
//
#include "UndergradStudent.h"

UndergradStudent::UndergradStudent() : Student() {}

UndergradStudent::UndergradStudent(std::string first, std::string last, int day, int month, int year, int credits)
        : Student(first, last, day, month, year, credits) {}

bool UndergradStudent::canGraduate() const {
    return numCredits >= 120;
}
