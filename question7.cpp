//
// Created by user on 2024/08/11.
//

#include "question7.h"
#include "question7b.h"

using namespace std;

Student::Student() {
    name = "";
    number = "";
    address = "";
    degree = "";
}

Student::Student(const string &name, const string &number, const string &address, const string &degree) {
    this->name = name;
    this->number = number;
    this->address = address;
    this->degree = degree;
}

string Student::getName() const {
    return name;
}

string Student::getNumber() const {
    return number;
}

string Student::getAddress() const {
    return address;
}

string Student::getDegree() const {
    return degree;
}

void Student::setName(string &nameInput) {
    this->name = nameInput;
}

void Student::setNumber(string &numberInput) {
    this->number = numberInput;
}

void Student::setAddress(string &addressInput) {
    this->address = addressInput;
}

void Student::setDegree(string &degreeInput) {
    this->degree = degreeInput;
}

bool operator==(const Student &student, const Student &student2) {
    return student.getName() == student2.getName() && student.getNumber() == student2.getNumber() && student.getAddress() == student2.getAddress() && student.getDegree() == student2.getDegree();
}

ostream &operator<<(ostream &os, const Student &student) {
    os << "Name: " << student.getName() << endl;
    os << "Number: " << student.getNumber() << endl;
    os << "Address: " << student.getAddress() << endl;
    os << "Degree: " << student.getDegree() << endl;
    return os;
}

void Student::display_info() const {
    cout << *this;
}

int Student::calcFee() {
    if (this->degree.front() == 'B') { // All undergraduate degrees start with 'B'
        return 500;
    } else {
        return 600;
    }
}

istream &operator>>(istream &is, Student &student) {
    cout << "Enter name: ";
    is >> student.name;
    cout << "Enter number: ";
    is >> student.number;
    cout << "Enter address: ";
    is >> student.address;
    cout << "Enter degree: ";
    is >> student.degree;
    return is;
}


int main() {
    Student Mary("Mary Mbeli", "12345678", "Po Box 16, Pretoria, 0818", "BSc");
    Mary.display_info();
    cout << "Fees: R" << Mary.calcFee() << endl;
    cout << "--------------------------------" << endl;

    PostgradStd John("John Doe", "87654321", "Po Box 16, Pretoria, 0818", "MSc", "The effects of climate change on the economy");
    John.display_info();
    cout << "Fees: R" << John.calcFee() << endl;

    return 0;
}