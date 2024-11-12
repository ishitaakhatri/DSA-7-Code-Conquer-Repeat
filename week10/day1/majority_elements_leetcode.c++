// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: [3]
// Example 2:

// Input: nums = [1]
// Output: [1]
// Example 3:

// Input: nums = [1,2]
// Output: [1,2]
 

// Constraints:

// 1 <= nums.length <= 5 * 104
// -109 <= nums[i] <= 109

class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n = arr.size();
         int count1 = 0 , count2 = 0 , element1 = 0 , element2 = 1;
    for(int i = 0 ; i < n ; i++){
        if(count1 == 0 && arr[i] != element2){
            count1 = 1;
            element1 = arr[i];
        } 
        else if(count2 == 0 && arr[i] != element1){
            count2 = 1;
            element2 = arr[i];
        }
        else if(element1 == arr[i]) count1++;
        else if(element2 == arr[i]) count2++;
        else{
            count1--;
            count2--;
        }
    }
    vector<int> ls;
    count1 = 0;
    count2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(element1 == arr[i]) count1++;
        if(element2 == arr[i]) count2++;
    }
    int mini = (int)(n/3)+1;
    if(count1 >= mini)ls.push_back(element1);
    if(count2 >= mini && element2 != element1)ls.push_back(element2);
    sort(ls.begin(),ls.end());
    return ls;
    }
};