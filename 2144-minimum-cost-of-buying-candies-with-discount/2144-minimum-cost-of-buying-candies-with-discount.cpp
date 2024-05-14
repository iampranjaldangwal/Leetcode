class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int minCost = 0;
        int i = 0;
        int n = cost.size();
        while(i<n){
            if((i+1)%3 != 0)
            minCost += cost[i];
            i++;;
        }
        return minCost;
    }
};