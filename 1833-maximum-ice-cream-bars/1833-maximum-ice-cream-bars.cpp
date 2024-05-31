class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n = costs.size();
        int ibarPrice = 0,ibar = 0;
        for(int i=0;i<n;i++){
            ibarPrice += costs[i];
            if(ibarPrice <= coins)
              ibar++;
            else
                break;
        }
        return ibar;
    }
};