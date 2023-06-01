#include <iostream>
#include <vector>

using namespace std;

bool isInVectorinValue(int num, int idx, vector<int> &vec) {
    if (vec[idx] == num) {
        return true;
    }
    return false;
}
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> vec1(n); 
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec1[i] = num;
    }
    vector<int>vec2(n);
    vector<int>vec3(n);
    vector<int>vec4(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if ( i != j ) {
                if (vec1[j] < vec1[i]) {
                    if (isInVectorinValue(vec1[j], i, vec2) == false ) {
                        vec2[i] = vec1[j]; 
                        vec4[i]++;
                    } 
                }
            }
        }
    }
    for(int i = 0; i< n ; i++) {
   
        if ( i == n -1) {
            cout << vec4[i] ; 
        } else {
            cout << vec4[i] << " "; 
        }
        
    }
    return 0; 
}