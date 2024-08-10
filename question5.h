//
// Created by user on 2024/08/10.
//

#ifndef ASS3_QUESTION5_H
#define ASS3_QUESTION5_H

#include <string>

namespace std {

    class PhoneCall {
        public:
            PhoneCall();
            PhoneCall(string number, int length, float rate);
            ~PhoneCall();
            string getNumber();
            int getLength();
            float getRate();
            float calcCharge();
            friend bool operator==(const PhoneCall &call, const PhoneCall &call2); // equality operator
            friend ostream &operator>>(ostream &os, const PhoneCall &call); // output operator
            friend istream &operator<<(istream &is, PhoneCall &call); // input operator
        private:
            string number;
            int length;
            float rate;
    };

} // std

#endif //ASS3_QUESTION5_H
