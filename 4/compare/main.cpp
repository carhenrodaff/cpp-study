#include <iostream>

using namespace std;

int main() {
    double int1 = 0;
    double int2 = 0;
    double smaller, larger;
    bool equalFlag = false;
    bool nearEqual = false;
    char quit;
    while(true){
        cin >> int1 >> int2;
        if (int1 > int2){
            larger = int1;
            smaller = int2;
        }
        if (int1 < int2){
            larger = int2;
            smaller = int1;
        }
        if (int1 == int2){
            equalFlag = true;
        }
        if (int1/int2 < 1.0/100.0){
            nearEqual = true;
        }
        if (!equalFlag || !nearEqual) {
            cout << "The smaller value is: " << smaller << endl;
            cout << "The larger value is: " << larger << endl;
        }
        if(equalFlag){
            cout << "The numbers are equal." << endl;
        }
        if(nearEqual) {
            cout << "These numbers are near equal" << endl;
        }
        cout << "Enter | to quit or any other character to continue\n";
        cin >> quit;
        if(quit == '|'){
            break;
        }
        nearEqual = false;
        equalFlag = false;
    }
    return 0;
}
