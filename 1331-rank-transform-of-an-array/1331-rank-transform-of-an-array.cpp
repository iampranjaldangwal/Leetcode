class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // Create a copy of the original array
        vector<int> temp(arr);
        // Sort the copied array
        sort(temp.begin(), temp.end());

        // Create a map to store the ranks
        unordered_map<int, int> rankMap;
        int rank = 1;

        // Assign ranks to the elements in the sorted array
        for (int num : temp) {
            if (rankMap.find(num) == rankMap.end()) {
                rankMap[num] = rank++;
            }
        }

        // Create a vector to store the rank transformed array
        vector<int> arrRank;
        for (int num : arr) {
            arrRank.push_back(rankMap[num]);
        }

        return arrRank;
    }
};
