// Valid Palindrome
// beats 14.69% runtime, beats 5.15% memory
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> str;
        for (int i = 0; i < s.size(); i++) {
            if (std::isalnum(s[i])) {
                if (isupper(s[i])) {
                    str.push_back(tolower(s[i]));
                }
                else {
                    str.push_back(s[i]);
                }
            }
        }
        vector<char> reverseStr = str;
        reverse(reverseStr.begin(), reverseStr.end());
        bool palindrome{true};
        for (int i = 0; i < str.size(); i++) {
            if (reverseStr.at(i) != str.at(i)) {
                palindrome = false;
            }
        }
        return palindrome;
    }
};
