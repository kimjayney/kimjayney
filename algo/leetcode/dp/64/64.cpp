#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<int> v(grid[0].size(), 0);
        vector<vector<int>> newcost(grid.size(), v);
    
        newcost[0][0] = grid[0][0];
        for(int i = 1; i< grid[0].size(); i++) {
            newcost[0][i] = newcost[0][i-1] + grid[0][i];
        }
        
        for(int i = 1; i < newcost.size(); i++) {
            int sum = 0;
             
            for(int j = i; j >= 0; j--) {  
                sum += grid[j][0];
            }
            newcost[i][0] = sum;
        }
        
        for(int i = 1; i < newcost.size(); i++) {
            for(int j = 1; j < newcost[0].size(); j++) {   
                int newcost1 = newcost[i-1][j];
                int newcost2 = newcost[i][j-1];
                
                if (newcost1 > newcost2) {
                    newcost[i][j] = newcost2 + grid[i][j];
                } else {
                    newcost[i][j] = newcost1 + grid[i][j];
                } 
            }
            
        }
   
        
        return newcost[newcost.size() -1][newcost[0].size() -1];
        // return 0;
    }
};

int main() {
    Solution s;
    std::vector<int> v(4, 0);
    vector<vector<int>> grid(2, v );

    grid[0][0] = 1;
    grid[0][1] = 3;
    grid[0][2] = 1;
    grid[0][3] = 2;

    grid[1][0] = 2; 
    grid[1][1] = 4; 
    grid[1][2] = 5; 
    grid[1][3] = 2; 
    
 
    
    // for(int i = 0; i < grid.size(); i++) {  
    //     for(int j = 0; j < grid[0].size(); j++){
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    cout <<   s.minPathSum(grid);
    return 0;
}