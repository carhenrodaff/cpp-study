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
        cin >> int1;
        cin >> int2;
        if (int1 > int2){
            larger = int1;
            smaller = int2;
        }
        else if (int1 < int2){
            larger = int2;
            smaller = int1;
        }
        else if (){
            equalFlag = true;
        }
        if (!equalFlag) {
            cout << "The smaller value is: " << smaller << endl;
            cout << "The larger value is: " << larger << endl;
        }
        else{
            cout << "The numbers are equal." << endl;
        }
        cout << "Enter | to quit or any other character to continue\n";
        cin >> quit;
        if(quit == '|'){
            break;
        }
    }
    return 0;
}
