#include<queue>
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> qstd;
        queue<int> qsand;
        int n = sandwiches.size();

        for (int elem : students)
         qstd.push(elem); 

        for (int elem : sandwiches)
         qsand.push(elem); 
        
        int rejectionCounter = 0;

        while(!qstd.empty() && !qsand.empty()){
            if(qstd.front() == qsand.front()){
              qstd.pop();
              qsand.pop();
              rejectionCounter = 0;
            }
            else{
                qstd.push(qstd.front());
                qstd.pop();
                rejectionCounter++;
            }
        if(rejectionCounter == qstd.size())
        break;
        } 
         return qstd.size();
    }
};