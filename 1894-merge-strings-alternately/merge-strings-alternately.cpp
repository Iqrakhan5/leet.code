class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = ""; // this will store the final merged string
        int i = 0, j = 0;

        // Keep going until we reach the end of both words
        while (i < word1.length() || j < word2.length()) {
            if (i < word1.length()) {
                result += word1[i]; // take letter from word1
                i++;
            }
            if (j < word2.length()) {
                result += word2[j]; // take letter from word2
                j++;
            }
        }

        return result;
    }
};
