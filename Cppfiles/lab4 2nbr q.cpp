#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    int valueA;
public:
    void setData(int a) {
        valueA = a;
    }
    void showData() {
        cout << "ValueA: " << valueA << endl;
    }
    friend void swapData(ClassA&, ClassB&);
};

class ClassB {
    int valueB;
public:
    void setData(int b) {
        valueB = b;
    }
    void showData() {
        cout << "ValueB: " << valueB << endl;
    }
    friend void swapData(ClassA&, ClassB&);
};

void swapData(ClassA &a, ClassB &b) {
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main() {
    ClassA objA;
    ClassB objB;
    objA.setData(20);
    objB.setData(40);

    cout << "Before Swap:" << endl;
    objA.showData();
    objB.showData();

    swapData(objA, objB);

    cout << "\nAfter Swap:" << endl;
    objA.showData();
    objB.showData();

    return 0;
}
