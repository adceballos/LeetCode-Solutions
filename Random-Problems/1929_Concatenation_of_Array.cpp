// 1929. Concatenation of Array
// Solution used: No, Time: 00:05:16
// Time complexity: O(n)
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concatenation = nums;
        for (int i = 0; i < nums.size(); i++) {
            concatenation.push_back(nums[i]);
        }
        return concatenation;
    }
};
