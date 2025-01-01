class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU"; // All vowels
    int left = 0, right = s.size() - 1; // Two pointers

    while (left < right) {
        // Move left pointer until a vowel is found
        while (left < right && vowels.find(s[left]) == string::npos) {
            left++;
        }
        // Move right pointer until a vowel is found
        while (left < right && vowels.find(s[right]) == string::npos) {
            right--;
        }

        // Swap the vowels
        if (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
}


    
};