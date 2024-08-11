//
// Created by user on 2024/08/11.
//
#include <iostream>
#include <string>

using namespace std;

class PersonType
{
    public:
        PersonType();
        PersonType(string n, int id, string bd);
    private:
        string name;
        int ID;
        string birthday;
};

int main()
{
    PersonType family[20], newBaby("Anny Dube", 20180912, "2 Sept");

    //Assume family has been initialised
    for (int i = 0; i < 20; i++)
        if (family.birthday[5] == newBaby.birthday)
            cout << family.name[5] << " share a birthday with "
                 <<newBaby.name;
    return 0;
}