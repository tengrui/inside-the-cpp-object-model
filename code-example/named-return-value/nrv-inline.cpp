#include <istream>
#include <cstring>

using namespace std;

class test {
    friend test foo (double);
public:
    test() {
        memset(array, 0, 100 * sizeof(double));
    }
    inline test(const test& t);
private:
    double array[100];
};

inline test::test(const test &t) {
    memcpy(this, &t, sizeof(test));
}

test foo(double val) {
    test local;
    local.array[0] = val;
    local.array[99] = val;
    return local;
}

int main()
{
    for (int cnt = 0; cnt < 1000000000; cnt++) {
        test t = foo(double(cnt) );
    }
    return 0;
}
