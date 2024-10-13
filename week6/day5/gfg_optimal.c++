// Longest Sub-Array with Sum K
// Difficulty: MediumAccuracy: 24.64%Submissions: 446K+Points: 4
// Given an array arr containing n integers and an integer k. Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value k.

// Examples:

// Input : n = 6, arr[] = {10, 5, 2, 7, 1, 9}, k = 15
// Output : 4
// Explanation: The sub-array is {5, 2, 7, 1}.
// Input : n= 3, arr[] = {-1, 2, 3}, k = 6
// Output : 0
// Explanation: There is no such sub-array with sum 6.
// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(n).

// Constraints:
// 1<=n<=105
// -105<=arr[i], K<=105

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int left = 0;
        int right = 0;
        long long sum = A[0];
        int max_len = 0;
        while(right < N){
            while(left <= right && sum > K){
                sum -= A[left];
                left++;
            }
            if(sum == K){
                max_len = max(max_len , right - left + 1);
            }
            right++;
            if(right < N){
                sum = sum + A[right];
            }
        }
        return max_len;
    } 

};