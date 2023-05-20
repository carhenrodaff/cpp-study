#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v;
// a vector of ints
    for (int i; cin >> i;)      //doesnt have third argument or size comparitor because for loop is terminated once other type beside int is entered.
        v.push_back(i);
// get values
    for (int i = 0; i <= v.size(); ++i)
// print values
        cout << "v[" << i << "] == " << v[i] << '\n';
    return 0;
}