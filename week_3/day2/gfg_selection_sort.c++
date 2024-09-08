// The task is to complete the insert() function which is used to implement Insertion Sort.


// Examples:

// Input: n = 5, arr[] = { 4, 1, 3, 9, 7}
// Output: 1 3 4 7 9
// Input: n = 10, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output: 1 2 3 4 5 6 7 8 9 10

// Your Task: 
// You don't have to read input or print anything. Your task is to complete the function insert() and insertionSort() where insert() takes the array, it's size and an index i and insertionSort() uses insert function to sort the array in ascending order using insertion sort algorithm. 

// Expected Time Complexity: O(n*n).
// Expected Auxiliary Space: O(1).

class Solution
{
    public:
    void insert(int arr[], int i,int n)
    {
        int j = i;
        int temp = 0;
         while(j > 0 && arr[j-1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        
            j--;
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for(int i = 0 ; i <= n-1 ; i++){
            insert(arr,i,n);
        }
    }
};