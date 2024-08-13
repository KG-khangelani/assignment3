//
// Created by user on 2024/08/11.
//

#ifndef ASS3_QUESTION7_H
#define ASS3_QUESTION7_H

#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string name;
        string number;
        string address;
        string degree;

    public:
        Student();

        Student(const string &name, const string &number, const string &address, const string &degree);

        string getName() const;

        string getNumber() const;

        string getAddress() const;

        string getDegree() const;

        void setName(string &nameInput);

        void setNumber(string &numberInput);

        void setAddress(string &addressInput);

        void setDegree(string &degreeInput);

        int calcFee();

        virtual void display_info() const;

        friend bool operator==(const Student &student, const Student &student2);

        friend ostream &operator<<(ostream &os, const Student &student);

        friend istream &operator>>(istream &is, Student &student);
};

#endif //ASS3_QUESTION7_H
