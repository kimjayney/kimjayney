#include <iostream>
#include <string>
#include <vector> 

using namespace std;

class Solution {
public:
    string addStrings(std::string num1, std::string num2) {
    int num1Pointer = num1.length() - 1;
    int num2Pointer = num2.length() - 1;
    std::vector<char> reversedResult; // 여기서 미리 사이즈를 지정해주면 안된다. edge case 발생함

    int carry = 0; 

    while (num1Pointer >= 0 || num2Pointer >= 0 || carry){
        int num1Calc = 0;
        int num2Calc = 0;

        if (num1Pointer >= 0) {
            num1Calc = std::stoi(std::string(1, num1[num1Pointer]));
        } else {
            num1Calc = 0;
        }
        if (num2Pointer >= 0 ) {
            num2Calc = std::stoi(std::string(1, num2[num2Pointer]));
        } else {
            num2Calc = 0;
        }

        int sum = num1Calc + num2Calc + carry;
        carry = sum / 10;
        int digit = sum % 10; 
        reversedResult.emplace_back(digit + '0');

        num1Pointer--;
        num2Pointer--; 
    }
    cout << endl;
    std::string result(reversedResult.rbegin(), reversedResult.rend());
    return result;
}

};
int main() {
    Solution s;
    cout<< s.addStrings("385242420", "273");
    return 0;
}