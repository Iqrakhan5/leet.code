class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1 = 0, t1 = 0; // Initialize pointers to 0
        while (s1 < s.size() && t1 < t.size()) {
            if (s[s1] == t[t1]) {
                s1++; // Move the s pointer if characters match
            }
            t1++; // Always move the t pointer
        }
        return s1 == s.size(); // True if all characters in s are found
    }
};
