// Difficulty: MediumAccuracy: 55.23%Submissions: 222K+Points: 4
// Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot.
// Given an array arr[], its starting position is low (the index of the array) and its ending position is high(the index of the array).

// Note: The low and high are inclusive.

// Implement the partition() and quickSort() functions to sort the array.

class Solution
{
    public:
    
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int p_index = partition(arr,low,high);
            quickSort(arr,low,p_index-1);
            quickSort(arr,p_index+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot  &&  i < high){
            i++;
        }
        while(arr[j] > pivot  &&  j > low){
            j--;
        }
        if( i < j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;

    }
};