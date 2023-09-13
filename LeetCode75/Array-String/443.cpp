// 443. String Compression
// Solution used: No, but had to search online for std::to_string() function, Time: >= 00:25:00
class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1) {
            return 1;
        }
        string s{};
        char holder = chars[0];
        int counter{0};
        // set element to holder, then check on next iter if element = holder, if so increment
        for (int i = 0; i < chars.size(); i++) {
            if (chars[i] == holder) {
                counter++;
            }
            if ((i == chars.size() - 1) || (chars[i] != holder)){
                s += holder;
                if (counter >= 2) {
                    string strCounter = std::to_string(counter);
                    s += strCounter;
                }
                counter = 1;
                holder = chars[i];
            }
            if (i == chars.size() - 1 && chars[i] != chars[i - 1]) {
                s += chars[i];
            }
        }
        chars.clear();
        for (int i = 0; i < s.size(); i++) {
            chars.push_back(s[i]);
        }
        return chars.size();
    }
};
