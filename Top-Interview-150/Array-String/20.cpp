// 20. Valid Parentheses
// Solution used: Yes, Time: >= 40 minutes
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> chars;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                chars.push(s[i]);
            }
            else if (chars.empty() || (chars.top() == '(' && s[i] != ')') || (chars.top() == '[' && s[i] != ']') || (chars.top() == '{' && s[i] != '}')) {
                return false;
            }
            else {
                chars.pop();
            }
        }
    return (chars.empty());
    }
};
