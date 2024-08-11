//
// Created by user on 2024/08/11.
//
#include <iostream>
#include <string>

using namespace std;

class PersonType
{
    public:
        PersonType() {
            name = "";
            ID = 0;
            birthday = "";
        }
        PersonType(const string &n, const int &id, const string &bd) {
            name = n;
            ID = id;
            birthday = bd;
        }
        friend bool operator==(const PersonType &person, const PersonType &person2) {
            if (person.name == person2.name && person.ID == person2.ID && person.birthday == person2.birthday)
                return true;
            else
                return false;
        }
        string getName() const {
            return this->name;
        }
        int getID() const {
            return this->ID;
        }
        string getBirthday() const {
            return this->birthday;
        }
    private:
        string name;
        int ID;
        string birthday;
};

int main()
{
    PersonType family[20], newBaby("Anny Dube", 20180912, "2 Sept");

    //Assume family has been initialised
    for (int i = 0; i < 20; i++) // NOLINT(*-loop-convert)
        if (family[i].getBirthday() == newBaby.getBirthday())
            cout << family[i].getName() << " share a birthday with "
                 <<newBaby.getName();
    return 0;
}