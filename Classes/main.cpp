﻿#include <iostream>
#include <sstream>
using namespace std;

class Student
{
public:
    int get_age() { return age; }
    void set_age(int age) { this->age = age; }

    int get_standard() { return standard; }
    void set_standard(int standard) { this->standard = standard; }

    string get_first_name() { return first_name; }
    void set_first_name(string first_name) { this->first_name = first_name; }

    string get_last_name() { return last_name; }
    void set_last_name(string last_name) { this->last_name = last_name; }

    string to_string()
    {
        stringstream oss;
        oss << this->get_age() << "," << this->get_first_name() << "," << this->get_last_name() << "," << this->get_standard();
        return oss.str();
    }

private:
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}