// 520. Detect Capital
// Solution used: No, Time: 00:06:40
// My solution is a bit dragged out and probably more complex then it needs to be, but its runtime is 0ms
class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.length() == 1) {
            return true;
        }
        bool allCaps = false;
        bool firstCap = false;
        bool firstLower = false;
        if (isupper(word[0]) && isupper(word[1])) {
            allCaps = true;
        }
        else if (isupper(word[0])) {
            firstCap = true;
        }
        else if (islower(word[0])) {
            firstLower = true;
        }
        for (int i = 0; i < word.size(); i++) {
            if (allCaps) {
                if (!isupper(word[i])) {
                    return false;
                }
            }
            else if (firstCap) {
                if (i != 0 && !islower(word[i])) {
                    return false;
                }
            }
            else if (firstLower) {
                if (!islower(word[i])) {
                    return false;
                }
            }
        }
        return true;
    }
};

// Another great solution I found that took a much simpler approach:
class Solution {
public:
    bool detectCapitalUse(string word) {
        int count{0};
        if(word.size() == 1)
            return true;
        
        for(int i = 0; i < word.size(); i++) {
            if(isupper(word[i])) {
                count++;
            }
        }
        
        if (count == 1 && isupper(word[0]))
            return true;
        if (count == 0 || count == word.size())
            return true;
        else
            return false;
    }
};
