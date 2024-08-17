// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21

#include<limits.h>
class Solution {
public:
    int reverse(int x) {
        int last_digit = 0;
        long long int reverse_num = 0;
        int max_int = INT_MAX;
        int min_int = INT_MIN;
         int sign = (x < 0) ? -1 : 1;
         x = abs(x);
        while(x > 0){
            last_digit = x%10;
            x = x/10;
            reverse_num = (reverse_num*10) + last_digit;
        }
        reverse_num *= sign;
        if(reverse_num > max_int || reverse_num < min_int){
            return 0;
        }
        else{
            return reverse_num;
        }
        
    }
};