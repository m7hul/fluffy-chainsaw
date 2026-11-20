class Solution {
public:
    bool str(string s) {
        string y = string(s.rbegin(), s.rend());
        return s == y;
    }

    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            if (str(words[i])) {
                return words[i]; // Return immediately once found
            }
        }
        return ""; // Return empty string if no palindrome exists
    }
};
