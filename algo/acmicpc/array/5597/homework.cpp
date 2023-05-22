#include <iostream>
#include <vector>
#include <array>
using namespace std;

// 과제안낸놈

int main() {
    vector<int> students(31); // bucket 
    for (int i = 1; i<= 28; i++) {
        int number;
        cin >> number;
        students[number] = 1 ;
    }
 
    for (int i = 1; i<= 30; i++) { 
        if (students[i] == 0) {
            cout << i  << endl;
        }
    }
    return 0;
}
