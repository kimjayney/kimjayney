#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> newcost;
        newcost.emplace_back(0);
        newcost.emplace_back(0);
        for(int i = 2; i < cost.size() +1  ; i++) {
            int cost1 = cost[i-2] + newcost[i-2];
            int cost2 = cost[i-1] + newcost[i-1];
            if (cost1 < cost2) {
                newcost.emplace_back(cost1);
            } else {
                newcost.emplace_back(cost2);
            }
        }
        // for(int i = 0; i < newcost.size() ; i++ ){
            // cout << newcost[i] << " "; 
        // }
        return newcost[newcost.size() -1 ];
    }
};
int main() {
    Solution s;
    vector<int> ab = {1,2,4,6,2,4,6,1};
    cout << s.minCostClimbingStairs(ab);
    
}