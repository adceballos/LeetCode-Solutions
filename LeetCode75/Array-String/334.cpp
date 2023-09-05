// Increasing Triple Subsequence
// used solution
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return false;
        }
        // set low and mid to INT_MAX, which is the largest positive integer that can be stored using a signed 32-bit integer
        int low = INT_MAX;
        int mid = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (nums[i] > mid) {
                return true;
            }
            else if (nums[i] < low) {
                low = nums[i];
            }
            else if (nums[i] > low && nums[i] < mid) {
                mid = nums[i];
            }
        }
        return false;
    }
};
