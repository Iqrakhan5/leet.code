

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        if (s.size() != t.size()) return false; // If lengths differ, they cannot be isomorphic

        std::unordered_map<char, char> mappingS, mappingT;

        for (int i = 0; i < s.size(); ++i) {
            char charS = s[i];
            char charT = t[i];

            // Check mapping from s to t
            if (mappingS.find(charS) == mappingS.end()) {
                mappingS[charS] = charT; // Create a new mapping
            } else if (mappingS[charS] != charT) {
                return false; // Mismatch in mapping
            }

            // Check mapping from t to s
            if (mappingT.find(charT) == mappingT.end()) {
                mappingT[charT] = charS; // Create a new mapping
            } else if (mappingT[charT] != charS) {
                return false; // Mismatch in mapping
            }
        }

        return true; // All mappings are consistent
    }
};
