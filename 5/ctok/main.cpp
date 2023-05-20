#include "std_lib_facilities.h"

double ctok(double c)
{
    double k = c + 273.15;
    return k;
}
int main() {
    try {
        double c = 0;
        cin >> c;
        if (c < 0) {
            throw exception();
        }
        double k = ctok(c);
        cout << k << endl;
        return 0;
    }
    catch (runtime_error& e) {
        cerr << "runtime error:" << e.what() << endl;
        keep_window_open();
        return 1;
    }
}