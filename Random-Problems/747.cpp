// 747. Largest Number At Least Twice of Others
// Solution Used: No, Time: 00:07:18
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        int maxIndex{};
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == max) {
                maxIndex = i;
            }
            else if (!(max >= nums[i] * 2)) {
                return -1;
            }
        }
        return maxIndex;
    }
};
