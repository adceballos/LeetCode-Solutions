// 27. Remove Element
// Solution used: No, Time: 00:12:03
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums[i] = INT_MAX;
            }
        }
        std::sort(nums.begin(), nums.end());
        int k{};
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == INT_MAX) {
                break;
            }
            k++;
        }
        return k;
    }
};
