//
// Created by user on 2024/08/10.
//

#include "question4.h"

using namespace std;

Date::Date() {
    theday = 14;
    themonth = 8;
    theyear = 1752;
};

Date::Date(int day, int month, int year) {
    theday = day;
    themonth = month;
    theyear = year;
};

int Date::getDay() const {
    return theday;
};

int Date::getMonth() const {
    return themonth;
};

int Date::getYear() const {
    return theyear;
};

void Date::setDay(int day) {
    theday = day;
};

void Date::setMonth(int month) {
    themonth = month;
};

void Date::setYear(int year) {
    theyear = year;
};



int Date::monthLength() const {
    if (themonth == 2) {
        if (theyear % 4 == 0) {
            if (theyear % 100 == 0) {
                if (theyear % 400 == 0) {
                    return 29;
                }
                return 28;
            }
            return 29;
        }
        return 28;
    }
    if (themonth == 4 || themonth == 6 || themonth == 9 || themonth == 11) {
        return 30;
    }
    return 31;
};

Date &Date::operator++() {
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
};

Date &Date::operator--() {
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
};

bool Date::operator<(const Date &d) const {
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
};

void Date::operator<<(ostream &os) const {
    os << theday << "/" << themonth << "/" << theyear;
};