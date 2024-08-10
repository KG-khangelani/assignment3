//
// Created by user on 2024/08/10.
//

#ifndef ASS3_QUESTION4_H
#define ASS3_QUESTION4_H

#include <iostream>
#include <datetimeapi.h>

using namespace std;

class Date{
    public:
         //constructors
        Date();
        Date(int day, int month, int year);
        //accessors
        int getDay() const;
        int getMonth() const;
        int getYear() const;
        //mutators
        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);
        //operators to calculate next and previous days
        Date &operator++();
        Date &operator--();
        bool operator<(const Date &d) const;
        void operator<<(ostream &os) const;

    private:
        //the current day month and year
        int theday;
        int themonth;
        int theyear;
        //return the length of current month, taking into
        //account leap years
        int monthLength() const;
};

#endif //ASS3_QUESTION4_H
