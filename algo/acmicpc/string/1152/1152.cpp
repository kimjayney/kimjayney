#include <string>
#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    string s;
    
    int wordcount = 0;
    getline(std::cin, s);
    bool is_word = false;
    for(int i = 0; i < s.length(); i++) {    
        
        if (static_cast<int>(s[i]) == 32 && i !=0 && i != s.length() -1) {
            if (is_word == true) {
                wordcount++;
            }
        } else if (static_cast<int>(s[i]) != 32) {
            if (is_word == false) {
                is_word =true;
                wordcount++;
            }
        }
    }
    cout << wordcount ;
    return 0;
}