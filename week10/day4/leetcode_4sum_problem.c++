// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

 

// Example 1:

// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// Example 2:

// Input: nums = [2,2,2,2,2], target = 8
// Output: [[2,2,2,2]]
 

// Constraints:

// 1 <= nums.length <= 200
// -109 <= nums[i] <= 109
// -109 <= target <= 109


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) 
    {
        int n = arr.size();
        sort(arr.begin(),arr.end());
            vector<vector<int>> st;
    for(int i = 0 ; i < n ; i++)
    {
        if(i>0 && arr[i] == arr[i-1]) continue;
        for(int j = i+1 ; j < n ; j++)
        {
            if(j != i+1 && arr[j]==arr[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while(k < l)
            {
               long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l];
                if(sum == target)
                {
                    vector<int> temp = {arr[i],arr[j],arr[k],arr[l]};
                    st.push_back(temp);
                    k++;
                    l--;
                    while(k<l && arr[k] == arr[k-1]) k++;
                    while(k<l && arr[l] == arr[l+1]) l--;
                }
                else if(sum<target) k++;
                else l--;
            }
        }
    }
    return st;
    }
};