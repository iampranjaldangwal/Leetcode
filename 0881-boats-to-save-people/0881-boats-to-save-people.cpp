class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        int minBoats = 0;
        int i=0,j=n-1;

           while(i<j){
                if(people[j] >= limit){
                 minBoats++;
                 j--;
                }
                if((people[i]+people[j] <= limit) ){
                minBoats++;
                i++;
                j--;
                }
                else if(people[i]+people[j] >= limit){
                    minBoats++;
                    j--;
                }
                if(i==j)
              minBoats++;
            }
     return minBoats;
    }
};