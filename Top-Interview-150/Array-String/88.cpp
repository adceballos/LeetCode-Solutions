// 88. Merge Sorted Array
// Solution used: No, Time: 00:16:38
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mergedVectorSize = m + n;
        int j{};
        for (int i = m; i < mergedVectorSize; i++) {
            nums1[i] = nums2[j];
            j++;
        }
        std::sort(nums1.begin(), nums1.end());
    }
};
