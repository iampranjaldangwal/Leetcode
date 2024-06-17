class Solution {
public:
    bool judgeSquareSum(int c) {
       long long int i=0,j=sqrt(c);
       while(i<=j){
        long long int square = (i*i)+(j*j);
        if(square == c) return true;
        else if(square<c) i++;
        else if(square>c) j--;
       }
       return false;
    }
};