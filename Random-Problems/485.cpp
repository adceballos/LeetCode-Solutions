// 485. Max Consecutive Ones
// Solution used: Yes, Time: >= 00::20:00
// Overthought the solution...
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count{};
        int max{};
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
            }
            if (nums[i] == 0 || i == nums.size() - 1){
                if (count > max) {
                    max = count;
                }
                count = 0;
            }
        }
        return max;
    }
};
