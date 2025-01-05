class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stack; // To store indices of unmatched '('
        unordered_set<int> invalid_indices; // To store indices of invalid parentheses

        // First pass: Identify invalid parentheses
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                stack.push(i); // Store the index of '('
            } else if (s[i] == ')') {
                if (!stack.empty()) {
                    stack.pop(); // Match with a '('
                } else {
                    invalid_indices.insert(i); // Mark unmatched ')'
                }
            }
        }

        // Add any unmatched '(' left in the stack to the invalid set
        while (!stack.empty()) {
            invalid_indices.insert(stack.top());
            stack.pop();
        }

        // Second pass: Build the valid string
        string result;
        for (int i = 0; i < s.length(); ++i) {
            if (invalid_indices.find(i) == invalid_indices.end()) {
                result += s[i]; // Append only valid characters
            }
        }

        return result;
    }
};