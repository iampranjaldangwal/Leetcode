#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        sort(people.begin(),people.end());

        int minBoats = 0;
        int i=0,j=people.size()-1;
            
            while(i<=j){
                minBoats++;
                if(people[i]+people[j] <= limit)
                i++;
                j--;
            }
     return minBoats;
    }
};