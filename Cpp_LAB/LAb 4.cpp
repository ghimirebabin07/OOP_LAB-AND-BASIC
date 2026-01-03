#include<iostream>
using namespace std;

class B; // forward declaration

class A {
    int numA;
public:
    void setData(int a) {
        numA = a;
    }
    friend void add(A, B);
};

class B {
    int numB;
public:
    void setData(int b) {
        numB = b;
    }
    friend void add(A, B);
};

void add(A a, B b) {
    cout << "sum = " << a.numA + b.numB << endl;
}

int main() {
    A a;
    B b;
    a.setData(12);
    b.setData(30);
    add(a, b);
    return 0;
}
