// 551. Student Attendance Record 1
// Solution used: No, Time: about 45 mins
class Solution {
public:
    bool checkRecord(string s) {
        int absentCount{};
        int lateCount{1};
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                absentCount++;
            }
            else if (i < s.size() - 1 && s[i] == 'L' && s[i + 1] == 'L') {
                lateCount++;
                if (lateCount >= 3) {
                    return false;
                }
            }
            else {
                lateCount = 1;
            }
        }
        if (absentCount >= 2 || lateCount >= 3) {
            return false;
        }
        return true;
    }
};
