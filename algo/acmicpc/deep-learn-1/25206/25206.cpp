#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    double sum= 0.0;
    double majorsum = 0.0;
    for(int i = 0; i < 20 ; i++) {
        string major;
        double majorpoint; 
        string grade;
        cin >> major >> majorpoint >> grade;
        
        if (grade == "A+") {
            sum += majorpoint * 4.5;
            majorsum += majorpoint;
        } else if (grade == "A0") {
            sum += majorpoint * 4.0;
            majorsum += majorpoint;
        } else if (grade == "B+") {
            sum += majorpoint * 3.5;
            majorsum += majorpoint;
        } else if (grade == "B0") {
            sum += majorpoint * 3.0;
            majorsum += majorpoint;
        } else if (grade == "C+") {
            sum += majorpoint * 2.5;
            majorsum += majorpoint;
        } else if (grade == "C0") {
            sum += majorpoint * 2.0;
            majorsum += majorpoint;
        } else if (grade == "D+") {
            sum += majorpoint * 1.5;
            majorsum += majorpoint;
        } else if (grade == "D0") {
            sum += majorpoint * 1.0;
            majorsum += majorpoint;
        } else if (grade == "F") { // 대체 WHY???
            sum += majorpoint * 0.0;
            majorsum += majorpoint;
        }
    }
    cout << fixed;
    cout.precision(6);
    if (majorsum > 0) {
        cout << sum / majorsum << endl;
    } else {
        cout << 0.000000 << endl;
    }
    
    return 0;
}