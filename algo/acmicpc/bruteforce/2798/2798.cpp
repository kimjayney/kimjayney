#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    int N;
    int M;
    cin >> N >> M;

    
    vector<int> vec1(N);
    for(int i = 0; i<N; i++) {
        int num;
        cin >> num;
        vec1[i] = num;
    }
    int max_value = 0;
    // n^3;
    // for idx 부분에 대해서 비슷한 문제 나오면 복습 필요
    for(int i = 0; i < N -2; i++) {
        for(int j =  i + 1; j < N -1 ; j++) {
            for(int k = j + 1; k < N  ; k++) {
                int sum = vec1[i] + vec1[j] + vec1[k];
                // cout << sum << endl;
                if (sum <= M) {
                    if (max_value < sum) {
                        max_value = sum;
                    }
                }
            }
        }
    }
    cout << max_value;
    return 0; 

}