class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, char> map_s_to_t;
        unordered_map<char, char> map_t_to_s;

        for (size_t i = 0; i < s.length(); ++i) {
            char char_s = s[i];
            char char_t = t[i];

            // Check if the mappings are consistent
            if ((map_s_to_t.count(char_s) && map_s_to_t[char_s] != char_t) ||
                (map_t_to_s.count(char_t) && map_t_to_s[char_t] != char_s)) {
                return false;
            }

            // Create the mappings if not already present
            map_s_to_t[char_s] = char_t;
            map_t_to_s[char_t] = char_s;
        }

        return true;
    }
};
