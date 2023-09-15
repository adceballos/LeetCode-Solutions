// 242. Valid Anagram
// Solution used: No, Time: 00:14:47
// Time complexity: O(n * log(n)) loglinear, Space Complexity: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() < t.size()) {
            return false;
        }
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                return false;
            }
        }
        return true;
    }
};

// NeetCode solution:
// hashmap solution, similar to neetcode python implementation
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        
        for(int i = 0; i < s.size(); i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        
        for(int i = 0; i < smap.size(); i++){
            if(smap[i] != tmap[i]) return false;
        }
        return true;
    }
};
