//Summing Equation, enter integers, output sum
//5.8
//May 20, 2023

#include "std_lib_facilities.h"

vector<int>integers;

using namespace std;

int sum(string numberList){
    int sum = 0;
    for(int i : integers){
        sum = sum + integers[i];
    }
    return sum;
}

int main(){
    try{
        int sizeV;
        string numberList;
        cout << "Please enter the number of values you want to sum: " << endl;
        cin >> sizeV;
        if(!cin || sizeV <= 1){
            throw runtime_error("invalid input");
        }
        integers.reserve(sizeV);
        cout << "Please enter " << sizeV << " numbers.";
        cin >> numberList;
    }
    catch(runtime_error& e){
        cerr << "runtime error: " << endl;
        keep_window_open();
    }
}