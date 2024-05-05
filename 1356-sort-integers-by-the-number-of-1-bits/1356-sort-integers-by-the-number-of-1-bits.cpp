class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> p;

        for(int i=0;i<arr.size();i++){
           int count = 0;
           int x = arr[i];
            while(x != 0){
                if(x%2 != 0)
                count++;
                x /= 2;
            }
            p.push_back({count,arr[i]});
        }
        sort(p.begin(),p.end());
        vector<int> ans;
        for(int i=0;i<p.size();i++)
         ans.push_back(p[i].second);
    return ans;
    }
};