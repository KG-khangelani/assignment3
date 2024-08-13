//
// Created by user on 2024/08/14.
//

#include <iostream>
#include <string>

#include "question4.h"
#include "question5.h"
#include "question7.h"
#include "question7b.h"

using namespace std;

int main () {
    // Question 4
    cout << "Question 4" << endl;
    cout << "-----------" << endl;
    cout << "Enter a string: ";
    string input;
    cin >> input;
    cout << "The string is: " << input << endl;
//    cout << "The string reversed is: " << reverseString(input) << endl;
    cout << "-----------" << endl;

    // Question 5
    cout << "Question 5" << endl;
    cout << "-----------" << endl;
    cout << "Enter a string: ";
    string input2;
    cin >> input2;
    cout << "The string is: " << input2 << endl;
//    cout << "The string reversed is: " << reverseString(input2) << endl;
    cout << "-----------" << endl;

    // Question 7
    cout << "Question 7" << endl;
    cout << "-----------" << endl;
    Student student1("John Doe", "123456", "1234 Main St", "BSc");
    Student student2("Jane Doe", "654321", "4321 Main St", "BSc");
    cout << "Student 1: " << student1 << endl;
    cout << "Student 2: " << student2 << endl;
    cout << "Are the students the same? " << (student1 == student2 ? "Yes" : "No") << endl;
    cout << "-----------" << endl;

    // Question 7b
    cout << "Question 7b" << endl;
    cout << "-----------" << endl;
    PostgradStd postgrad1("Andile Nkunkuma", "123456", "1234 Main St", "BSc",
                          "The effects of climate change on the environment");
    PostgradStd postgrad2("Sino Drizzle", "654321", "4321 Main St", "MSc", "The effects of technology");
    cout << "Postgrad 1: " << endl;
    postgrad1.display_info();
    cout << endl << "Postgrad 2: " << endl;
    postgrad2.display_info();
    cout << "Are the postgrads the same? " << (postgrad1 == postgrad2 ? "Yes" : "No") << endl;
    cout << "-----------" << endl;

    return 0;
}