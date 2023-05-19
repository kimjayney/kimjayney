#include <iostream>
#include <vector>
using namespace std;


int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    vector<int> numbers;
    // i를 1부터 설정해야 줄바꿈현상 안생김
    for(int i = 0 ; i < 9 ; i++) {
        int s ;
        cin >> s;
        numbers.emplace_back(s);
    }
    int max_index = 0;
    int max_number = 0;
    int forloop_idx = 0;
    for( int & num: numbers) { 
        if(max_number < num) {
            max_number = num;
            max_index = forloop_idx + 1; 
        }
        forloop_idx++;
    }
    cout << max_number << endl;
    cout << max_index << endl;
}