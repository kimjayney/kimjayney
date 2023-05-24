#include <iostream>
#include <string>

using namespace std;
int main() {
    string s;
    string inputs; 
    while(!cin.eof()) {
        getline(cin,s);
        inputs += s + "\n";
    }
    cout << inputs;
    return 0;
}