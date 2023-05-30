#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;
    cin >> n;

    vector<vector<int>> vec1( n , vector<int> (n, 0)); 
    vector<int> result(n, 1);

    for(int i = 0; i< n;i++) {
        int weight;
        int height;
        vector<int> whdata;
        cin >> weight >> height;
        whdata.push_back(weight);
        whdata.push_back(height);
        vec1[i] = whdata;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n ; j++) {
            if (i != j && vec1[i][0] < vec1[j][0] && vec1[i][1] < vec1[j][1]) {
                result[i] += 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if (i == n-1) {
            cout << result[i] ;
        } else {
            cout << result[i] << " " ;
        }
        
    }
    

    return 0;
}