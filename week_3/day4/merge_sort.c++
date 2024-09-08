#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    vector<int> temp_arr;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp_arr.push_back(arr[left]);
            left++;
        } else {
            temp_arr.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp_arr.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp_arr.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp_arr[i - low];
    }
}

void merge_sort(int arr[], int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
