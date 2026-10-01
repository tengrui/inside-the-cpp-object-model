#include <iostream>

using namespace std;

class X {
public:
    int i;
    int j;
public:
    X(int val) : j (val), i(j) {}
};

class Y {
public:
    int i;
    int j;
public:
    Y(int val) : j(val) {
        i = j;
    }
};

int main() {
    X x(3);
    Y y(5);
    cout << x.i << ", " << x.j << endl;
    cout << y.i << ", " << y.j << endl;
    return 0;
}