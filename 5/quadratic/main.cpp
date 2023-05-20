#include<std_lib_facilities.h>

using namespace std;

double quad_equation(double a, double b, double c){

    double discriminant = (pow(b, 2)) - 4 * a * c;
    if(discriminant > 0){
        double first_root = (-b + sqrt(pow(b, 2)-4 * a * c))/(2 * a);
        double second_root = (-b - sqrt(pow(b, 2)-4 * a * c))/(2 * a);
        cout << first_root << endl << second_root;
    }
    else{
        cout << "No real solutions" << endl;
    }
    return 0.0;
}

int main() {
    try {
        int one, two, three;
        cout << "Please input your 3 known values for your equation." << endl;
        cin >> one >> two >> three;
        if (!cin) {
            throw runtime_error("input failure");
        }
        quad_equation(one, two, three);
    }
catch(runtime_error& e){
    cerr << "runtime error:" << e.what() << '\n';
}

};
