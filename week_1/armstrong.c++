// You are given a 3-digit number n, Find whether it is an Armstrong number or not.

// An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. 371 is an Armstrong number since 33 + 73 + 13 = 371. 

// Note: Return "true" if it is an Armstrong number else return "false".

class Solution {
  public:
    string armstrongNumber(int n) {
        int original_number = n;
        int last_digit = 0;
        int sum = 0;
        int number_of_digits=0;
        int temp = n;
        while(temp>0){
            temp = temp/10;
            number_of_digits++;
        }
        
        temp = n;
        
        while(temp>0){
            last_digit = temp%10;
            sum = sum+pow(last_digit,number_of_digits);
            temp=temp/10;
        }
        if(sum == original_number){
            return "true";
        }
        else{
            return "false";
        }
    }
};