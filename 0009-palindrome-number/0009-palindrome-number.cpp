class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int reversed_num = 0;
        int last_digit;
        while (x != 0) {
            int last_digit = x % 10;
            
            if (reversed_num > INT_MAX / 10 || (reversed_num == INT_MAX / 10 && last_digit > 7)) {
                return 0;
            }
            if (reversed_num < INT_MIN / 10 || (reversed_num == INT_MIN / 10 && last_digit < -8)) {
                return 0;
            }
            
            reversed_num = reversed_num * 10 + last_digit;
            x /= 10;
        }
        if(temp == reversed_num && temp>=0){
            return 1;
        } 
        return 0;
    }
};