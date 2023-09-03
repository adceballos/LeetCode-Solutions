// Reverse Words in a String
// 50:33, didn't use solution
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        int j{};
        for (int i = 0; i < s.size(); i++) {
            if (i == 0 && s[i] != ' ') {
                while ((s[i] != ' ') && (i < s.size())) {
                    word += s[i];
                    i++;
                }
                words.push_back(word);
                word = "";
            }
            else if ((s[i] != ' ') && (s[i - 1] == ' ')) {
                while ((s[i] != ' ') && (i < s.size())) {
                    word += s[i];
                    i++;
                }
                words.push_back(word);
                word = "";
            }    
        }
        std::reverse(words.begin(), words.end());
        string reversed{};
        for (int i = 0; i < words.size(); i++) {
            reversed += words[i];
            if (i != words.size() - 1) {
                reversed += " ";
            }
        }
    return reversed;
    }
};
