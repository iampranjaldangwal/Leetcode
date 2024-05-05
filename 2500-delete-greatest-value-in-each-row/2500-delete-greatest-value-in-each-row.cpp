class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
    
    for(auto& row:grid)
      sort(row.begin(),row.end());
    int ans = 0;
    for(int i=0;i<grid[0].size();i++){
        int maxElement = 0;
        for(int j=0;j<grid.size();j++)
          maxElement = max(maxElement,grid[j][i]);
        ans += maxElement;
    }
    return ans;

    }
};