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
        Date() {
            theday = 14;
            themonth = 8;
            theyear = 1752;
         }
        Date(int day, int month, int year) {
            theday = day;
            themonth = month;
            theyear = year;
        }
        //accessors
        int getDay() const {
            return this->theday;
        }
        int getMonth() const {
            return this->themonth;
        }
        int getYear() const {
            return this->theyear;
        }
        //mutators
        void setDay(int day) {
            this->theday = day;
        }
        void setMonth(int month) {
            this->themonth = month;
        }
        void setYear(int year) {
            this->theyear = year;
        }
        //operators to calculate next and previous days
        Date &operator++() {
            theday++;
            if (theday > monthLength()) {
                theday = 1;
                themonth++;
                if (themonth > 12) {
                    themonth = 1;
                    theyear++;
                }
            }
            return *this;
        }
        Date &operator--() {
            theday--;
            if (theday < 1) {
                themonth--;
                if (themonth < 1) {
                    themonth = 12;
                    theyear--;
                }
                theday = monthLength();
            }
            return *this;
        }
        bool operator<(const Date &d) const {
            if (theyear < d.theyear) {
                return true;
            } else if (theyear > d.theyear) {
                return false;
            } else {
                if (themonth < d.themonth) {
                    return true;
                } else if (themonth > d.themonth) {
                    return false;
                } else {
                    if (theday < d.theday) {
                        return true;
                    } else {
                        return false;
                    }
                }
            }
        }
        void operator<<(ostream &os) const {
            os << theday << "/" << themonth << "/" << theyear;
        }

    private:
        //the current day month and year
        int theday;
        int themonth;
        int theyear;
        //return the length of current month, taking into
        //account leap years
        int monthLength() const {
            if (themonth == 2) {
                if (theyear % 4 == 0) {
                    if (theyear % 100 == 0) {
                        if (theyear % 400 == 0) {
                            return 29;
                        } else {
                            return 28;
                        }
                    } else {
                        return 29;
                    }
                } else {
                    return 28;
                }
            } else if (themonth == 4 || themonth == 6 || themonth == 9 || themonth == 11) {
                return 30;
            } else {
                return 31;
            }
        }
};

#endif //ASS3_QUESTION4_H
