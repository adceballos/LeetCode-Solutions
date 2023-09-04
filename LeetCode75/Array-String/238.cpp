// Product of Array Except Self
// About 25 minutes, Didn't use solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> products;
        int totalProduct{1};
        int product{1};
        int holder;
        for (int i = 0; i < nums.size(); i++) {
            totalProduct *= nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                products.push_back(totalProduct);
            }
            else if (nums[i] == -1) {
                products.push_back(totalProduct * -1);
            }
            else {
                holder = nums[i];
                nums[i] = 1;
                for (int k = 0; k < nums.size(); k++) {
                    product *= nums[k];
                }
                products.push_back(product);
                product = 1;
                nums[i] = holder;
            }
        }
        return products;
    }
};
