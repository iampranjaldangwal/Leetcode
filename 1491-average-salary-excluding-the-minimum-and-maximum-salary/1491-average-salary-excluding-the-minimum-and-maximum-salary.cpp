class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int n = salary.size();
        double avgSalary = 0;
        for(int i=1;i<n-1;i++)
            avgSalary += salary[i];
    return avgSalary/(n-2);
    }
};