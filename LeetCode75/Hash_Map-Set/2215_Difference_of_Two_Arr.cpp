// 2215. Find the Difference of Two Arrays
// Solution used: No, Time: 00:20:16
// Time complexity: O(n), Space complexity: O(n)
// First attempt
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> set2;

        for (auto& num : nums1) {
            set1.insert(num);
        }

        for (auto& num : nums2) {
            set2.insert(num);
        }
        
        vector<int> distinct1;
        for (auto& num : set1) {
            if (set2.find(num) == set2.end()) {
                distinct1.push_back(num);
            }
        }

        vector<int> distinct2;
        for (auto& num : set2) {
            if (set1.find(num) == set1.end()) {
                distinct2.push_back(num);
            }
        }

        vector<vector<int>> answer;
        answer.push_back(distinct1);
        answer.push_back(distinct2);

        return answer;
    }
};
