#include <iostream>
using namespace std;

class Father {
protected:
    string fatherName;
public:
    Father() {
        cout << "Enter father's name: ";
        getline(cin, fatherName);
    }
};

class Mother {
protected:
    string motherName;
public:
    Mother() {
        cout << "Enter mother's name: ";
        getline(cin, motherName);
    }
};

class Son : public Father, public Mother {
protected:
    string sonName;
public:
    Son() {
        cout << "Enter son's name: ";
        getline(cin, sonName);
    }
};

class Grandson : public Son {
    string grandsonName;
public:
    Grandson() {
        cout << "Enter grandson's name: ";
        getline(cin, grandsonName);
    }

    void display() {
        cout << "Father's Name: " << fatherName << endl;
        cout << "Mother's Name: " << motherName << endl;
        cout << "Son's Name: " << sonName << endl;
        cout << "Grandson's Name: " << grandsonName << endl;
    }
};

int main() {
    Grandson g;
    g.display();
    return 0;
}
