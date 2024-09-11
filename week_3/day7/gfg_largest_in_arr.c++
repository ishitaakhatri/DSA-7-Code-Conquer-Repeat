// Given an array, arr. The task is to find the largest element in it.

// Examples:

// Input: arr = [1, 8, 7, 56, 90]
// Output: 90
// Explanation: The largest element of the given array is 90.
// Input: arr = [5, 5, 5, 5]
// Output: 5
// Explanation: The largest element of the given array is 5.
// Input: arr = [10]
// Output: 10
// Explanation: There is only one element which is the largest.
// Expected Time Complexity: O(n)
// Expected Space Complexity: O(1)

class Solution {
  public:
    int largest(vector<int> &arr) {
        int largest_element = arr[0];
        for(int i = 0 ; i <= arr.size()-1 ; i++){
            if(arr[i] > largest_element){
                largest_element = arr[i];
            }
        }
        return largest_element;
    }
};