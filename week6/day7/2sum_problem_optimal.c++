1. Two Sum
Solved
Easy
Topics
Companies
Hint
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> indexed_nums;
        for (int i = 0; i < n; i++) {
            indexed_nums.push_back({nums[i], i});
        }
        int left = 0;
        int right = n-1;
        sort(indexed_nums.begin(),indexed_nums.end());
        while(left < right){
            int sum = indexed_nums[left].first + indexed_nums[right].first;
            if(sum == target){
                return {indexed_nums[left].second,indexed_nums[right].second};
            }
            if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }
        return{};
    }
};