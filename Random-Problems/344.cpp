// 344. Reverse String
// Solution used: No, Time: 00:06:41
class Solution {
public:
    void reverseString(vector<char>& s) {
        int j = s.size() - 1;
        for (int i = 0; i < s.size() / 2; i++) {
            std::swap(s[i], s[j]);
            j--;
        }
    }
};
