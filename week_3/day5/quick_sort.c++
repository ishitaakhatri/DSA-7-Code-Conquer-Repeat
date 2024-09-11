#include<iostream>
#include<vector>
using namespace std;

int quick(int arr[],int low,int high){
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

void quick_sort(int arr[],int low,int high){
    if(low < high){
        int p_index = quick(arr,low,high);
        quick_sort(arr,low,p_index-1);
        quick_sort(arr,p_index+1,high);
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}