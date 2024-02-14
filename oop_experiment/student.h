#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    static int quantity;

    string name;
    string lastName;
    string description;
public:
    Student();
    Student(string name, string lastName, string description);

    static int getQuantity();

    string const getName();
    string const getLastName();
    string const getDescription();

    void setName(string name);
    void setLastName(string lastName);
    void setDescription(string description);

    bool operator==(const Student& rightSide);

    friend ostream& operator<<(ostream& ostream, const Student& student);

    ~Student();
};

#endif // STUDENT_H
