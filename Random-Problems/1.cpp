// 1. Two Sum
// Solution used: No, Time: 00:03:42
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> indices{};
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j) {
                    if (nums[i] + nums[j] == target) {
                        indices.push_back(i);
                        indices.push_back(j);
                        return indices;
                    }
                }
            }
        }
        return indices;
    }
};
