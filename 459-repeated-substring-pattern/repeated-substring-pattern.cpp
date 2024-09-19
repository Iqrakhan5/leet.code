class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        // Create a new string by concatenating s with itself
        string ss = s + s;

        // Check if the substring excluding the first and last character contains s
        return ss.find(s, 1) < n; 
    }
};
