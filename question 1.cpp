/*
    Created by user on 2024/08/10.
    TODO: Turn the student record into a class type rather than a structure type.
        The student record class should have member variables for all the input data.
        Make all member variables private.
    TODO: Use this class in program which grades a student. The program should read in the student’s
        name and markss and output the student’s record as well as the student’s average numeric
        marks for the entire course.
*/

#include <iostream>

using namespace std;

class Student {
    private:
        string name;
        int quiz1;
        int quiz2;
        int midtermExam;
        int finalExam;

    public:
        Student() {
            name = "";
            quiz1 = 0;
            quiz2 = 0;
            midtermExam = 0;
            finalExam = 0;
        }

        // name
        void setName(string nameInput) {
            this->name = nameInput;
        }

        string getName() {
            return name;
        }

        // quiz1Input
        void setQuiz1(int quiz1Input) {
            if (quiz1Input > 10 || quiz1Input < 0) {
                cout << "Quiz marks should be between 0 and 10." << endl;
                return;
            }
            this->quiz1 = quiz1Input;
        }

        int getQuiz1() const {
            return quiz1;
        }

        // quiz2Input
        void setQuiz2(int quiz2Input) {
            if (quiz2Input > 10 || quiz2Input < 0) {
                cout << "Quiz marks should be between 0 and 10." << endl;
                return;
            }
            this->quiz2 = quiz2Input;
        }

        int getQuiz2() const {
            return quiz2;
        }

        // midtermExamInput
        void setMidtermExam(int midtermExamInput) {
            if (midtermExamInput > 100 || midtermExamInput < 0) {
                throw "Midterm exam marks should be between 0 and 100.";
            }
            this->midtermExam = midtermExamInput;
        }

        int getMidtermExam() const {
            return midtermExam;
        }

        // finalExamInput
        void setFinalExam(int finalExamInput) {
            if (finalExamInput > 100 || finalExamInput < 0) {
                cout << "Final exam marks should be between 0 and 100." << endl;
                return;
            }
            this->finalExam = finalExamInput;
        }

        int getFinalExam() const {
            return finalExam;
        }
        // ------------------------------

        float getAverageCourseMark() const {
            float quiz1Mark = (getQuiz1()/10.0) * 100.0;
            float quiz2Mark = (getQuiz2()/10.0) * 100.0;
            float midtermExamMark = (getMidtermExam());
            float finalExamMark = (getFinalExam());

            return (((quiz1Mark + quiz2Mark)*0.25) + (midtermExamMark*0.25) + (finalExamMark*0.5));
        }
};

int main() {
    Student student;
    string name;
    int quiz1, quiz2, midtermExam, finalExam;

    cout << "Enter student's name: ";
    cin >> name;
    student.setName(name);

    cout << "Enter student's quiz 1 mark: ";
    cin >> quiz1;
    student.setQuiz1(quiz1);

    cout << "Enter student's quiz 2 mark: ";
    cin >> quiz2;
    student.setQuiz2(quiz2);

    cout << "Enter student's midterm exam mark: ";
    cin >> midtermExam;
    student.setMidtermExam(midtermExam);

    cout << "Enter student's final exam mark: ";
    cin >> finalExam;
    student.setFinalExam(finalExam);

    cout << "Student's name: " << student.getName() << endl;
    cout << "Quiz 1: " << student.getQuiz1() << endl;
    cout << "Quiz 2: " << student.getQuiz2() << endl;
    cout << "Midterm Exam: " << student.getMidtermExam() << endl;
    cout << "Final Exam: " << student.getFinalExam() << endl;
    cout << "Average Course Mark: " << student.getAverageCourseMark() << endl;

    return 0;
}
