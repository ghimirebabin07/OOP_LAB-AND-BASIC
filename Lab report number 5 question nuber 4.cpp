#include<iostream>
using namespace std;

class human {
protected:
    string name;
    int age;
public:
    void getdata() {
        cout << "Enter the name and age: ";
        cin >> name >> age;
    }

    void showdata() {
        cout << "\nName: " << name << "\nAge: " << age << endl;
    }
};

class male : public human {
protected:
    int height;
public:
    void getdata() {
        human::getdata();
        cout << "Enter the height: ";
        cin >> height;
    }

    void showdata() {
        human::showdata();
        cout << "Height: " << height << " cm" << endl;
    }
};

class female : public human {
protected:
    int weight;
public:
    void getdata() {
        human::getdata();
        cout << "Enter the weight: ";
        cin >> weight;
    }

    void showdata() {
        human::showdata();
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main() {
    male m;
    female f;

    cout << "\nEnter details for male:\n";
    m.getdata();
    cout << "\nMale details:\n";
    m.showdata();

    cout << "\nEnter details for female:\n";
    f.getdata();
    cout << "\nFemale details:\n";
    f.showdata();

    return 0;
}
