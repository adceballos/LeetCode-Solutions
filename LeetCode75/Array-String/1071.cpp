// Greatest Common Divisor of Strings
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int gcdOfChars;
        // use std::gcd from <algorithm> header to get the gcd of the number of chars in the str1 and str2.
        // this gcd is the number of chars in our x string that divide both str1 and str2.
        if (str1 + str2 == str2 + str1) {
            gcdOfChars = gcd(str1.size(), str2.size());
        }
        else {
            return "";
        }
        string x;
        // we can use either str1 or str2 and use the initial characters of size gcdOfChars to create our x string.
        for (int i = 0; i < gcdOfChars; i++) {
            x += str1[i];
        }
        return x;
    }
};
