#include<iostream>
using namespace std;

class person {
protected:
    string name;
    int age;
public:
    void getdata() {
        cout << "Enter the name of the person: ";
        cin.ignore();                // clear leftover newline character
        getline(cin, name);          // safely take full line input for name
        cout << "Enter the age of the person: ";
        cin >> age;
    }
    void showdata() {
        cout << "Name of the person: " << name << endl;
        cout << "Age of the person: " << age << endl;
    }
};

class babin : public person {
protected:
    int id;
public:
    void getdata() {
        person::getdata();
        cout << "Enter the ID of the person: ";
        cin >> id;
    }
    void showdata() {
        person::showdata();
        cout << "ID of the person: " << id << endl;
    }
};

class manish : public person {
protected:
    int clz;
public:
    void getdata() {
        person::getdata();
        cout << "Enter the class of Manish: ";
        cin >> clz;
    }
    void showdata() {
        person::showdata();
        cout << "Class of Manish is: " << clz << endl;
    }
};

int main() {
    manish m;
    cout << "\nEnter details for Manish:\n";
    m.getdata();

    cout << "\nDetails of Manish:\n";
    m.showdata();

    babin b;
    cout << "\nEnter details for Babin:\n";
    b.getdata();

    cout << "\nDetails of Babin:\n";
    b.showdata();

    return 0;
}
