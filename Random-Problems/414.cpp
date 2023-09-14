// 414. Third Maximum Number
// Solution used: No, Time: 00:22:57
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int firstDistinct = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > firstDistinct) {
                firstDistinct = nums[i];
            }
        }
        int secondDistinct{};
        bool secondExists = false;
        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] != firstDistinct) && (!secondExists)) {
                secondDistinct = nums[i];
                secondExists = true;
            }
            if (nums[i] > secondDistinct && nums[i] != firstDistinct) {
                secondDistinct = nums[i];
            }
        }
        int thirdDistinct{};
        bool thirdExists = false;
        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] != firstDistinct) && (nums[i] != secondDistinct) && (!thirdExists)) {
                thirdDistinct = nums[i];
                thirdExists = true;
            }
            if (nums[i] > thirdDistinct && nums[i] != firstDistinct && nums[i] != secondDistinct) {
                thirdDistinct = nums[i];
            }
        }
        if (!thirdExists) {
            return firstDistinct;
        }
        return thirdDistinct;
    }
};

// Second Solution
// Cleaned up the code up a bit, but has a slightly larger runtime (3ms over 0ms).
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int firstDistinct = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > firstDistinct) {
                firstDistinct = nums[i];
            }
        }
        int secondDistinct{};
        bool secondExists = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != firstDistinct) {
                if (!secondExists) {
                    secondDistinct = nums[i];
                    secondExists = true;
                }
                else if (nums[i] > secondDistinct) {
                    secondDistinct = nums[i];
                }
            }
        }
        int thirdDistinct{};
        bool thirdExists = false;
        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] != firstDistinct) && (nums[i] != secondDistinct)) {
                if (!thirdExists) {
                    thirdDistinct = nums[i];
                    thirdExists = true;
                }
                else if (nums[i] > thirdDistinct) {
                    thirdDistinct = nums[i];
                }
            }
        }
        return (thirdExists) ? thirdDistinct : firstDistinct;
    }
};
