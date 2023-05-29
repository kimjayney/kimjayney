#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    vector<int> vec1(26);
    int max_num = 0;
    int max_idx = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i = 0; i < s.length(); i++) {
        int num = static_cast<int>(s[i]); 
        vec1[num - 97] = vec1[num - 97]+ 1;
        if (max_num < vec1[num - 97]) {
            max_num = vec1[num - 97];
            max_idx = num - 97;
        }
    }
    int count = 0;
    
    for(int i = 0; i < vec1.size() ; i++) {  
        if (vec1[i] == max_num) {
            count++;
        }
    } 
    if (count > 1) {
        cout << "?";
    } else {
        char maxstr = char(max_idx + 65);
        cout << maxstr; 
    }
    
    return 0;
}