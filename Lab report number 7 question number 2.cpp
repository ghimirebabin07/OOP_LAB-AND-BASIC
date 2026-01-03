#include<iostream>
using namespace std;

class Number {
    private:
        int num1;
    public:
        void setValue() {
            cout << "Enter a number: ";
            cin >> num1;
        }

        void checkPrime() {
            int i, count = 0;

            if (num1 < 2) {
                cout << num1 << " is not a prime number." << endl;
                return;
            }

            for (i = 1; i <= num1; i++) {
                if (num1 % i == 0) {
                    count = count + 1;
                }
            }

            if (count == 2) {
                cout << num1 << " is a prime number." << endl;
            } else {
                cout << num1 << " is not a prime number." << endl;
            }
        }
};

int main() {
    Number n;
    char choice;  // ← added missing semicolon here

    do {
        n.setValue();
        n.checkPrime();

        cout << "Do you want to check another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended. Thank you!" << endl;

    return 0;
}
