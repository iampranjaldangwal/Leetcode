class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int leftSum = 0, rightSum = 0, maxSum = 0;
       int left = 0, right = cardPoints.size()-1; 
       for(int i=left;i<k;i++){
        leftSum += cardPoints[i];
       }
       maxSum = leftSum;
       for(int i=k-1;i>=0;i--){
        leftSum  -= cardPoints[i];
        rightSum += cardPoints[right];
        right--;
        maxSum = max(maxSum,leftSum + rightSum);
       }
       return maxSum;
    }
};