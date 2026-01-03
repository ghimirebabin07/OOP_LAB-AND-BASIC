#include<iostream>
using namespace std;

class B;

class A {
private:
    int length;
public:
    void getdata() {
        cout << "Enter the length of rectangle: ";
        cin >> length;
    }
    friend void area(A, B);
};

class B {
private:
    int breadth;
public:
    void getdata() {
        cout << "Enter the breadth of rectangle: ";
        cin >> breadth;
    }
    friend void area(A, B);
};

void area(A a, B b) {
    int result = a.length * b.breadth;
    cout << "Area of the rectangle is: " << result << endl;
}

int main() {
    A a;
    B b;
    a.getdata();
    b.getdata();
    area(a, b);
    return 0;
}
