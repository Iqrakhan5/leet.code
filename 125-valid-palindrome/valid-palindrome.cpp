class Solution {
public:
    bool isPalindrome(string s) {
         int left = 0, right = s.size() - 1;

    while (left < right) {
        // Step 1: Skip non-alphanumeric characters for the left pointer
        if (!isalnum(s[left])) {
            left++;
            continue; // Skip to the next iteration
        }

        // Step 2: Skip non-alphanumeric characters for the right pointer
        if (!isalnum(s[right])) {
            right--;
            continue; // Skip to the next iteration
        }

        // Step 3: Compare the characters (case-insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false; // Not a palindrome
        }

        // Step 4: Move both pointers closer to the center
        left++;
        right--;
    }

    return true;
    }
};