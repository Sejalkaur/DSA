class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex; // Map to store the last index of each character
        int maxLength = 0; // Variable to store the max length
        int start = 0; // Left boundary of the sliding window

        for (int end = 0; end < s.length(); end++) {
            if (charIndex.find(s[end]) != charIndex.end() && charIndex[s[end]] >= start) {
                // Duplicate found, adjust the start pointer
                start = charIndex[s[end]] + 1;
            }
            charIndex[s[end]] = end; // Update the last index of the character
            maxLength = max(maxLength, end - start + 1); // Update max length
        }

        return maxLength;
    }
};
