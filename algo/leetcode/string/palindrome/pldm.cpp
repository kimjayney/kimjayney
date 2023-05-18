#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int startPointer = 0;
        int endPointer = s.length() -1;
        while (endPointer > startPointer) { 
            char left = s[startPointer];
            char right = s[endPointer];

            if (!isalnum(left)) {
                startPointer++;
            } else if (!isalnum(right)) {
                endPointer--;
            } else {
                if (tolower(left) != tolower(right)) {
                    return false;
                }
                startPointer++;
                endPointer--;
            } 
        } 
        return true;
    }
};

int main() {
    Solution s;
    cout << s.isPalindrome("A man, a plan, a canal: Panama") << endl;
    return 0;
}