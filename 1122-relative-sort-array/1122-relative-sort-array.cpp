class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> vec;
        int n = arr1.size();
        int m = arr2.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr2[i]==arr1[j]){
                vec.push_back(arr1[j]);
                arr1[j] = -1;
               }
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<n;i++){
            if(arr1[i]!=-1)
            vec.push_back(arr1[i]);
        }
        return vec;
    }
};