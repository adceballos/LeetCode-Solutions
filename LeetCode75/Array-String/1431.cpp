class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // n = number of kids (elements in the given candies array)
        int greatestCandy = candies.at(0);
        vector<bool> greatestCandies;
        for (int i = 1; i < candies.size(); i++) {
            if (candies.at(i) >= greatestCandy) {
               greatestCandy = candies.at(i);
            }
        }
        for (int i = 0; i < candies.size(); i++) {
            if ((candies.at(i) + extraCandies) >= greatestCandy) {
                greatestCandies.push_back(true);
            }
            else {
                greatestCandies.push_back(false);
            }
        }
        return greatestCandies;
    }
};
