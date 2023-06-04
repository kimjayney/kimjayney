#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string newstr ;
        newstr = s[0];
        int idx = 0;
        for(int i = 1; i < s.size(); i++) { 
            if (newstr.back() == s[i]) {
                newstr.pop_back();
            } else {
                newstr.push_back(s[i])  ;
            }
        }  
        return newstr;
    }
};

int main() {
    Solution s;
    cout << s.removeDuplicates("abbaca");
    return 0;
}