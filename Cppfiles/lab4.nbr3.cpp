#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    int numA;
public:
    void setData(int a) {
        numA = a;
    }
    friend void Maximum(ClassA, ClassB);
};

class ClassB {
    int numB;
public:
    void setData(int b) {
        numB = b;
    }
    friend void Maximum(ClassA, ClassB);
};


void Maximum(ClassA a, ClassB b) {
    if (a.numA > b.numB)
        cout << "Maximum is: " << a.numA << endl;
    else
        cout << "Maximum is: " << b.numB << endl;
}

int main() {
    ClassA a;
    ClassB b;

    a.setData(45);
    b.setData(60);

    Maximum(a,b);

    return 0;
}
