#include <iostream>
#include <vector> 
using namespace std;
bool checkisin(vector<int> &result, int value) {
    for (int & num: result) {
        if (num == value) {
            return true;
        }
    }
    return false;
}
int main() {
    vector<int> result;
    for (int i = 0 ; i < 10; i++) {
        int s;
        cin >> s;
        int calc = s % 42; 
        bool check = checkisin(result, calc);
        if (check == false) {
            result.emplace_back(calc);
        }
    }
    cout << result.size() << endl;
    
    return 0;
}