#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    vector<int> count_condition = {1, 1, 2,2,2, 8};
    for (int i = 0; i < 6; i++) {
        int value;
        cin >> value;
        int need;
        need = count_condition[i] - value;
        if (i == 5) {
            cout << need;
        } else {
            cout << need << " ";
        }
        
    }    
    return 0;
}