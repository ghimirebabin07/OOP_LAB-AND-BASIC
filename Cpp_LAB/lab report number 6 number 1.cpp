#include<iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person() {
        name = "";
        age = 0;
    }

    void getdata() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
    string schoolName;
public:
    Student(string sName) {
        cout << "\nEnter Student Information:" << endl;
        getdata();
        schoolName = sName;
    }

    void displayStudent() {
        cout << "\n-- Student Details --" << endl;
        display();
        cout << "School Name: " << schoolName << endl;
    }
};
class Employee : public Person {
    string companyName;
public:
    Employee(string cName) {
        cout << "\nEnter Employee Information:" << endl;
        getdata();
        companyName = cName;
    }

    void displayEmployee() {
        cout << "\n-- Employee Details --" << endl;
        display();
        cout << "Company Name: " << companyName << endl;
    }
};
int main() {
    string schoolName, companyName;
    cout << "Enter school name for student: ";
    getline(cin, schoolName);
    Student s(schoolName);
    cout << "\nEnter company name for employee: ";
    getline(cin, companyName);
    Employee e(companyName);
    s.displayStudent();
    e.displayEmployee();

    return 0;
}
