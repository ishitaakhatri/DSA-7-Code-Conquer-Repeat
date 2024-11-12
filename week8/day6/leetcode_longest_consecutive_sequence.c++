// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
 

// Constraints:

// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109

class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if(n==0) return 0;
    int longest = 1;
    unordered_set <int> st;
    for(int i = 0 ; i < n ; i++){
        st.insert(arr[i]);
    }
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                count = count+1;
            }
            longest = max(longest,count);
        }
    }
    return longest;
    }
};