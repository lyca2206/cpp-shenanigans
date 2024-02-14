#include "student.h"

int Student::quantity = 0;

Student::Student(): Student("default", "default", "default") {}
Student::Student(string name, string lastName, string description): name(name), lastName(lastName), description(description) {quantity++;}

int Student::getQuantity() {return quantity;}

string const Student::getName() {return name;}
string const Student::getLastName() {return lastName;}
string const Student::getDescription() {return description;}

void Student::setName(string name) {this->name = name;}
void Student::setLastName(string lastName) {this->lastName = lastName;}
void Student::setDescription(string description) {this->description = description;}

bool Student::operator==(const Student& rightSide) {
    bool equalName = this->name == rightSide.name;
    bool equalLastName = this->lastName == rightSide.lastName;
    bool equalDescription = this->lastName == rightSide.description;

    return equalName && equalLastName && equalDescription;
}

Student::~Student() {quantity--;}

ostream& operator<<(ostream& ostream, const Student& student) {
    return ostream << student.name + " " + student.lastName + " - " + student.description;
}
