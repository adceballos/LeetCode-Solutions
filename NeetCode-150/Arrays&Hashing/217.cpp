// 217.cpp Contains Duplicate
// Solution used: No, Time: 00:07:54
// Time complexity: O(n), linear
// find and insert function both have O(1) time. Loop iterates n times where n is the number of elements in nums, so O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> m;
        for (auto& num : nums) {
            if (m.find(num) != m.end()) {
                return true;
            }
            else {
                m.insert(num);
            }
        }
        return false;
    }
};
// Another solution that I learned from NeetCode is to insert each element from nums into a hash set, and if the sizes are equal then return false because you can't insert duplicates into hash sets
// O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> m;
        for (auto& num : nums) {
            m.insert(num);
        }
        return (m.size() == nums.size()) ? false : true;
    }
};

// Found a solution on LeetCode showing different ways to approach this problem, all of which can be used for other problems with specific use cases, so I wanted to put them here:
// Brute Force
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return flag;
    }
};
// Complexity
// Time complexity: O((n∗(n+1))/2) ≈ O(n^2)
 )
// Space complexity: O(1)

// Shorted Approach : Idea behind code
// sort the array.
// linearly traverse, find if there is any of the number and its greater one are equal or not
// Shorted Approach
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool flag = false;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return flag;
    }
};
// Complexity
// Time complexity: O(n∗log(n))
// Space complexity: O(1)

// Set Approach : Idea behind code
// Set only don't contain duplicate elment .
// If the size of set if less than the original vector then it contain duplicate element.
// For your set approach, time complexity can be reduced from O(nlogn) to O(n) using an unordered_set. Regular set uses trees with O(logn) insert, but unordered_sets use hashing for O(1). :)
// Set Approach
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};
// Complexity
// Time complexity: O(n∗log(n))
// Space complexity: O(n)

// Map : Idea behind code
// traverse vector and count frequency using any data structure.
// Iterate through data structure to find if the frequency is beyond 1.
// Contains Duplicate
  class Solution {
  public:
      bool containsDuplicate(vector<int>& nums) {
          map<int,int> mp;
          for(auto i : nums) mp[i]++;
          bool flag = false;
          for(auto i : mp){
              if(i.second >= 2) return true;
          }
          return flag;
      }
  };
// Complexity
// Time complexity: O(n∗log(n))
// Space complexity: O(n)

// Hashmap : Idea behind code
// traverse vector and count frequency using any data structure.
// Iterate through data structure to find if the frequency is beyond 1.
// same as above but difference is that it will be in O(n)
// Contains Duplicate
  class Solution {
  public:
      bool containsDuplicate(vector<int>& nums) {
          unordered_map<int,int> mp;
          for(auto i : nums) mp[i]++;
          bool flag = false;
          for(auto i : mp){
              if(i.second >= 2) return true;
          }
          return flag;
      }
  };
// Complexity
// Time complexity: O(n)
// Space complexity: O(n)
