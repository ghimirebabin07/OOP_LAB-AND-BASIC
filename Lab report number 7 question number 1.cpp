#include<iostream>
using namespace std;

class celsius {
    private:
        float tempC;
    public:
        void setTemp(float a) {
            tempC = a;
        }
        float toFahrenheit() {
            return (tempC * 9.0 / 5.0) + 32;
        }
};

class fahrenheit {
    private:
        float tempF;
    public:
        void setTemp(float b) {
            tempF = b;
        }
        float toCelsius() {
            return (tempF - 32) * 5.0 / 9.0;
        }
};

int main() {
    celsius c;
    fahrenheit f;
    float temp;

    cout << "Enter the temperature in Celsius: ";
    cin >> temp;
    c.setTemp(temp);
    cout << "The converted temperature into Fahrenheit is: " << c.toFahrenheit() << " F" << endl;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temp;
    f.setTemp(temp);
    cout << "The converted temperature into Celsius is: " << f.toCelsius() << " C" << endl;

    return 0;
}
