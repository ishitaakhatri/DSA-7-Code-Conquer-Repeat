// Given an array arr, return the second largest distinct element from an array. If the second largest element doesn't exist then return -1.

// Examples:

// Input: arr = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.
// Input: arr = [10, 10]
// Output: -1
// Explanation: The largest element of the array is 10 and the second largest element does not exist so answer is -1.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

class Solution {
  public:
    // Function returns the second
    int second_largest_element = -1;
    int print2largest(vector<int> &arr) {
        int largest_element = arr[0];
        for(int i = 0 ; i <= arr.size()-1 ; i++)
        {
            if(arr[i] > largest_element){
                largest_element = arr[i];
            }
        }
        for(int i = 0 ; i <= arr.size()-1 ; i++)
        {
            if(arr[i] > second_largest_element && arr[i] != largest_element){
                second_largest_element = arr[i];
            }
        }
        return second_largest_element;
        
    }
};