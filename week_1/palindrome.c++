// Easy
// Topics
// Companies
// Hint
// Given an integer x, return true if x is a 
// palindrome
// , and false otherwise.

 

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0){
            return false;
        }
        long long reverse_num = 0;
       int last_digit = 0;
       int original_num = x;
       while(x > 0){
        last_digit = x%10;
        reverse_num = (long long)(reverse_num*10);
        reverse_num += last_digit;
        x = x/10;
       }
       if(reverse_num == original_num){
        return true;
       }
    return false;
    }
};