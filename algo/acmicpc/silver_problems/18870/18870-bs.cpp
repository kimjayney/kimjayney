#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> vec1(n); 
    vector<int> vec2(n); 
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec1[i] = num;
        vec2[i] = num;
    }
    
    unique(vec1.begin(), vec1.end());
    sort(vec1.begin(), vec1.end());
    
    vec1.erase(std::unique(vec1.begin(), vec1.end()), vec1.end());
  
    for(int i = 0; i < vec2.size(); i++) {
        auto b = upper_bound(vec1.begin(), vec1.end(), vec2[i])- vec1.begin() -1 ;
        if (i == vec2.size() - 1 ) {
            cout << b ;
        } else {    
            cout << b << " ";
        }
        
    }
    

    

    return 0; 
}