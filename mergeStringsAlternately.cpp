#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string concWord = "";
        int i;
        int size_longest_word = 0;
        if (size(word2) > size(word1)) {
            size_longest_word = size(word2);
        } else {
            size_longest_word = size(word1);
        }

        for (i = 0; i < size_longest_word; i++)
        {
            if (i < size(word1)) {
                concWord.push_back(word1[i]);
            }
            if (i < size(word2)) {
             concWord.push_back(word2[i]);
            }
 
        }
        
        return concWord;
    }
};

int main()
{
    Solution novo = Solution();
    string concWord = novo.mergeAlternately("ab", "pqrs");
    cout<< concWord;
    return 0;
}