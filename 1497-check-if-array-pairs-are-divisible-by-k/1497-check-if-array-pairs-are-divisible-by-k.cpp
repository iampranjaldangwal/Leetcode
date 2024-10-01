class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> remFreqMap;
        
        for(int num : arr){
         int rem = ((num % k)+k)%k ;
         remFreqMap[rem]++;
        }

        for(auto &[rem,freq] : remFreqMap){
            if(rem == 0){
                if(freq % 2 != 0)
                 return false;
            }
            else if(k % 2 == 0 && 2 * rem == k){
                    if(freq % 2 != 0)
                     return false;
            }
            else{
                if(remFreqMap[rem] != remFreqMap[k-rem])
                   return false;
            }
        }
        return true;
    }
};