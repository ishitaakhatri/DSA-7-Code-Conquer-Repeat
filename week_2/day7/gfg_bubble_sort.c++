// Given an Integer n and a list arr. Sort the array using bubble sort algorithm.

// Examples :

// Input: n = 5, arr[] = {4, 1, 3, 9, 7}
// Output: 1 3 4 7 9
// Input: n = 10, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output: 1 2 3 4 5 6 7 8 9 10

// Your Task : 
// You don't have to read input or print anything. Your task is to complete the function bubblesort() which takes the array and it's size as input and sorts the array using bubble sort algorithm.

// Expected Time Complexity: O(n^2).
// Expected Auxiliary Space: O(1).

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n) 
    {
            for(int i = n-1; i >= 0; i--)
            {
                for(int j = 0; j <= i-1; j++)
                {
                     if(arr[j] > arr[j+1])
                        {
                swap(arr[j],arr[j+1]);
                        }
                }
            }
    }
};