//
// Created by user on 2024/08/12.
//

#include "question7b.h"

using namespace std;

PostgradStd::PostgradStd() {
    dissertation = "";
}

PostgradStd::PostgradStd(const string &name, const string &number, const string &address, const string &degree, const string &dissertation) : Student(name, number, address, degree) {
    this->dissertation = dissertation;
}

string PostgradStd::getDissertation() const {
    return dissertation;
}

void PostgradStd::setDissertation(string &dissertationInput) {
    this->dissertation = dissertationInput;
}

void PostgradStd::display_info() const {
    cout << "Dissertation: " << getDissertation() << endl;
}

int PostgradStd::calcFee() {}