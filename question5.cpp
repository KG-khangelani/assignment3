//
// Created by user on 2024/08/10.
//

#include "question5.h"

using namespace std;

PhoneCall::PhoneCall() {
    number = "";
    length = 0;
    rate = 0;
}

PhoneCall::PhoneCall(string number, int length, float rate) {
    this->number = number;
    this->length = length;
    this->rate = rate;
}

PhoneCall::~PhoneCall() {
    // destructor
}

string PhoneCall::getNumber() const {
    return number;
}

int PhoneCall::getLength() const {
    return length;
}

float PhoneCall::getRate() const {
    return rate;
}

float PhoneCall::calcCharge() const {
    return static_cast<float>(length) * rate;
}

void PhoneCall::setNumber(string &numberInput) {
    this->number = numberInput;
}

void PhoneCall::setLength(int &lengthInput) {
    this->length = lengthInput;
}

void PhoneCall::setRate(float &rateInput) {
    this->rate = rateInput;
}

bool operator==(const PhoneCall &call, const PhoneCall &call2) {
    return call.getNumber() == call2.getNumber() && call.getLength() == call2.getLength() && call.getRate() == call2.getRate();
}

ostream &operator<<(ostream &os, const PhoneCall &call) {
    os << "Number: " << call.getNumber() << ", Length: " << call.getLength() << ", Rate: " << call.getRate();
    return os;
}

istream &operator>>(istream &is, PhoneCall &call) {
    string number;
    int length;
    float rate;
    cout << "Enter call number: ";
    is >> number;
    cout << "Enter call length: ";
    is >> length;
    cout << "Enter call rate: ";
    is >> rate;
    call.setNumber(number);
    call.setLength(length);
    call.setRate(rate);
    return is;
}

