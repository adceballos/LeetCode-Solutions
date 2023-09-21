// 49. Group Anagrams, Medium
// Solution used: Yes, Time: 35 mins until using solution
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        
        for(auto str : strs) {
            string word = str;
            sort(word.begin(), word.end());
            // string in vector at string key "aet" = "eat" on first iteration
            mp[word].push_back(str);
        }
        
        vector<vector<string>> ans;
        // keyValuePairs represents the key value pairs in the unordered_map mp
        for(auto keyValuePairs : mp) {
            // you .second to access the vector<string> element from the key value pairs inside mp. If we used .first it would return the string key.
            ans.push_back(keyValuePairs.second);
        }
        return ans;
    }
};

// NeetCode Solution:
/*
    Given array of strings, group anagrams together (same letters diff order)
    Ex. strs = ["eat","tea","tan","ate","nat","bat"] -> [["bat"],["nat","tan"],["ate","eat","tea"]]

    Count chars, for each string use total char counts (naturally sorted) as key

    Time: O(n x l) -> n = length of strs, l = max length of a string in strs
    Space: O(n x l)
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (int i = 0; i < strs.size(); i++) {
            string key = getKey(strs[i]);
            m[key].push_back(strs[i]);
        }
        
        vector<vector<string>> result;
        for (auto it = m.begin(); it != m.end(); it++) {
            result.push_back(it->second);
        }
        return result;
    }
private:
    string getKey(string str) {
        vector<int> count(26);
        for (int j = 0; j < str.size(); j++) {
            count[str[j] - 'a']++;
        }
        
        string key = "";
        for (int i = 0; i < count.size(); i++) {
            key.append(to_string(count[i]) + '#');
        }
        return key;
    }
};
