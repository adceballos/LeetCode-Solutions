#include <algorithm>
#include <iostream>
#include <vector>
class Solution
{
public:
  std::string mergeAlternately(std::string word1, std::string word2)
  {
    std::vector<char> word1chars;
    std::vector<char> word2chars;
    for (int i = 0; i < word1.length(); i++)
    {
      word1chars.push_back(word1[i]);
    }
    std::reverse(word1chars.begin(), word1chars.end());

    for (int i = 0; i < word2.length(); i++)
    {
      word2chars.push_back(word2[i]);
    }
    std::reverse(word2chars.begin(), word2chars.end());

    std::string merged{};
    int i{0};
    while (!word1chars.empty() || !word2chars.empty())
    {
      if (!word1chars.empty())
      {
        merged += word1chars.back();
        word1chars.pop_back();
      }
      if (!word2chars.empty())
      {
        merged += word2chars.back();
        word2chars.pop_back();
      }
      i++;
    }
    return merged;
  }
};

int main()
{
  Solution x;
  //Test case 1, expected output: apbqcr
  std::string word1 = "abc";
  std::string word2 = "pqr";
  std::string merged(x.mergeAlternately(word1, word2));
  std::cout << merged;
  
}
