#include<iostream>
#include<iomanip>
using namespace std;

class adder {
public:
    void sum(int a, int b) {
        int result = a + b;
        cout << "Sum = " << result << endl;
    }
};

int main() {
    int num1, num2;
    adder obj;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;  // Correct input statement

    obj.sum(num1, num2);  // Call sum function
    return 0;
}
