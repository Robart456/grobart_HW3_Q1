#include <iostream>
#include "Person.h"
#include "Student.h"
#include "GradStudent.h"
#include "UndergradStudent.h"

using namespace std;

int main() {
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    Student s1("Peter", "Parker", 10, 8, 2001, 15);
    s1.addCredits(15);
    cout << s1.getName() << " has credits: " << s1.getCredits() << endl;

    GradStudent gs1("Bruce", "Banner", 22, 12, 1980, 28);
    gs1.addCredits(3);
    cout << gs1.getName() << " can graduate: " << gs1.canGraduate() << endl;

    UndergradStudent us1("Steve", "Rogers", 4, 7, 1920, 110);
    us1.addCredits(15);
    cout << us1.getName() << " can graduate: " << us1.canGraduate() << endl;

    return 0;
}
