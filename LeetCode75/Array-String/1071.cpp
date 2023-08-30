// Greatest Common Divisor of Strings
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int i{0};
        std::vector<char> vecX;
        // created a while loop that doesn't stop executing until we've iterated through both strings.
        // compares the characters of the two strings at the same index and pushes it back to vector vecX if the same.
        while (i < str1.length() || i < str2.length()) {
            if (str1[i] == str2[i]) {
                vecX.push_back(str1[i]);
            }
            i++;
        }
        // putting each character from the given strings into a vector so I can use the pop_back function for arithemtic.
        std::vector<char> vec1;
        for (char c : str1) {
            vec1.push_back(c);
        }
        std::vector<char> vec2;
        for (char c : str2) {
            vec2.push_back(c);
        }
        string x;
        // ensure that the characters from the given strings can both be divided evenly by the characters in x.
        // check if vecX has any characters, otherwise skip this part so we don't get a divide by zero error.
        if (vecX.size() != 0) {
            while ((vec1.size() % vecX.size()) != 0) {
                vecX.pop_back();
            }
            while (vec2.size() % vecX.size() != 0) {
                vecX.pop_back();
            }
            for (int i = 0; i < vecX.size(); i++) {
                x += vecX.at(i);
            }
        }
        return x;
    }
};
