//
// Created by user on 2024/08/10.
//

#ifndef ASS3_QUESTION5_H
#define ASS3_QUESTION5_H

#include <string>
#include <iostream>

using namespace std;

class PhoneCall {
    public:
        PhoneCall();
        PhoneCall(string number, int length, float rate);
        ~PhoneCall();
        string getNumber() const;
        int getLength() const;
        float getRate() const;
        float calcCharge() const;
        void setNumber(string &numberInput);
        void setLength(int &lengthInput);
        void setRate(float &rateInput);
        friend bool operator==(const PhoneCall &call, const PhoneCall &call2); // equality operator
        friend ostream &operator<<(ostream &os, const PhoneCall &call); // output operator
        friend istream &operator>>(istream &is, PhoneCall &call); // input operator
    private:
        string number;
        int length;
        float rate;
};

#endif //ASS3_QUESTION5_H
