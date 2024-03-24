//
// Created by jmrob on 3/23/2024.
//
#include "Student.h"

Student::Student() : Person(), numCredits(0) {}

Student::Student(std::string first, std::string last, int day, int month, int year, int credits)
        : Person(first, last, day, month, year), numCredits(credits) {}

void Student::addCredits(int newCredits) {
    numCredits += newCredits;
}

int Student::getCredits() const {
    return numCredits;
}

bool Student::canGraduate() const {
    return false;
}
