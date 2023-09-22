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
            // .find will search for num within set2. If it finds it, it will return an iterator pointing to num (or if it was a map, pointing to the element stored at the key num).
            // If the num is not found, then it will equal set2.end() because .end() returns an iterator pointing just past the end of the set.
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

// LeetCode solution:
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // Here, they are creating 2 sets the same way I did, but I didn't know you could do it this way. This saves time from writing code and makes the code look cleaner.
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        
        vector<int> distinct_nums1, distinct_nums2;
        for (int num : set1) {
            // Here, .count returns the number of occurrences of num. This achieves the same functionality as my code.
            // If the number in set1 does not exist in set2 (because there are 0 occurrences), then that number is unique to set1, so we push it to the vector distinct_nums1.
            if (set2.count(num) == 0) {
                distinct_nums1.push_back(num);
            }
        }

        for (int num : set2) {
            if (set1.count(num) == 0) {
                distinct_nums2.push_back(num);
            }
        }
        // returning a vector<vector<int>> without having to initialize it and push back the distinct vectors the way I did with my answer vector.
        return {distinct_nums1, distinct_nums2};
    }
};
