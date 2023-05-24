#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputs;
    cin >> inputs;
    int cost = 0;
    for (int i = 0; i < inputs.length(); i++) {
        int asciitonum = static_cast<int>(inputs[i]);
        if (asciitonum >=65 && asciitonum <= 67) {
            cost += 3;
        } else if (asciitonum >= 68 && asciitonum <= 70) {
            cost += 4;
        } else if (asciitonum >= 71 && asciitonum <= 73) {
            cost += 5;
        } else if (asciitonum >= 74 && asciitonum <= 76) {
            cost += 6;
        } else if (asciitonum >= 77 && asciitonum <= 79) {
            cost += 7;
        } else if (asciitonum >= 80 && asciitonum <= 83) {
            cost += 8;
        } else if (asciitonum >= 84 && asciitonum <= 86) {
            cost += 9;
        } else if (asciitonum >= 87 && asciitonum <= 90) {
            cost += 10;
        } 
    }
    cout << cost;
}