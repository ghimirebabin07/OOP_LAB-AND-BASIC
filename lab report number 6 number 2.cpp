#include <iostream>
using namespace std;
class alpha {
protected:
    int x;
public:
    alpha() {
        x = 0;
    }

    alpha(int x_val) {
        x = x_val;
    }

    void showa() {
        cout << "x = " << x << endl;
    }
};
class beta : public alpha {
protected:
    int y, z;
public:
    beta() : alpha() {
        y = 0;
        z = 0;
    }

    beta(int x_val, int y_val, int z_val) : alpha(x_val) {
        y = y_val;
        z = z_val;
    }

    void showb() {
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
};
class gamma : public beta {
protected:
    int m, n;
public:
    gamma() : beta() {
        m = 0;
        n = 0;
    }

    gamma(int x_val, int y_val, int z_val, int m_val, int n_val) 
        : beta(x_val, y_val, z_val) {
        m = m_val;
        n = n_val;
    }

    void showg() {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
};

int main() {
    gamma g(5, 10, 15, 20, 25);
    g.showa();
    g.showb();
    g.showg();

    return 0;
}
