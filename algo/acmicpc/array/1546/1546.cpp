#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n ; i++) {
        int value;
        cin >>value;
        v.emplace_back(value);
    }
    int max = *max_element(v.begin(), v.end());
    
    vector<double> newv;
    for(int i =0; i < v.size(); i++) {
        double newcalc = (double)v[i] / (double)max;
        newv.emplace_back(newcalc*100);
    }
    double sum = 0.0;
    
    for (int i = 0; i < newv.size(); i++) {
        sum += newv[i];
    }
    
    double avg = sum / v.size();
    cout << avg;
}