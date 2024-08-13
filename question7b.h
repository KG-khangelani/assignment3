//
// Created by user on 2024/08/12.
//

#include "question7.h"

#ifndef ASS3_QUESTION7B_H
#define ASS3_QUESTION7B_H


class PostgradStd : Student {
    private:
        string dissertation; // title of the Masters of doctorate

    public:
        PostgradStd();
        PostgradStd(const string &name, const string &number, const string &address, const string &degree, const string &dissertation);
        string getDissertation() const;
        void setDissertation(string &dissertationInput);

    void display_info() const override;
    int calcFee();
};


#endif //ASS3_QUESTION7B_H
