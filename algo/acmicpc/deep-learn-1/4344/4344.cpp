#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n ;
    cin >> n;
    for(int i = 0; i < n ; i++) {
        int sum = 0;
        int numbers;
        cin >> numbers;
        vector<int> vec1(numbers);
        for(int j = 0; j < numbers; j++) {
            int sumn= 0;
            cin >> sumn;
            sum += sumn;
            vec1.emplace_back(sumn);
        }
        double avg = sum / numbers;
        int count = 0;
        for(int j = 0; j < vec1.size(); j++) {
            if (vec1[j] > avg) {
                count++;
            }
        } 
        cout << fixed;
        cout.precision(3);
        // cout << avg << endl; 
        double rs = (count / numbers)*100;
        cout << (static_cast<double>(count ) / static_cast<double>(numbers))*100 << "%" << endl;
    }
    return 0;
}