// Given an array arr containing both positive and negative integers, the task is to compute the length of the largest subarray that has a sum of 0.

// Examples:

// Input: arr[] = [15, -2, 2, -8, 1, 7, 10, 23]
// Output: 5
// Explanation: The largest subarray with a sum of 0 is [-2, 2, -8, 1, 7].
// Input: arr[] = [2, 10, 4]
// Output: 0
// Explanation: There is no subarray with a sum of 0.
// Input: arr[] = [1, 0, -4, 3, 1, 0]
// Output: 5
// Explanation: The subarray is [0, -4, 3, 1, 0].
// Constraints:
// 1 ≤ arr.size() ≤ 106
// −103 ≤ arr[i] ≤ 103, for each valid i

class Solution {
  public:
    int maxLen(vector<int>& arr) 
    {
        int n = arr.size();
        int sum = 0;
    int maxi = 0;
    map<int,int> mpp;
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
        if(sum == 0){
            maxi = i+1;
        }
        else{
            if(mpp.find(sum) != mpp.end()){
                int index = mpp[sum];
                maxi = max(maxi,(i-index));
            }
            else{
                mpp[sum] = i;
            }
        }
    }
    return maxi;
    }
};