// 283. Move Zeroes
// Solution used: No, Time: 00:14:47
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == 0) {
                    std::swap(nums[i], nums[j]);
                }
            }
        }
    }
};
