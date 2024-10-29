#include <iostream>
#include <vector>
using namespace std;
void sort_arr(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int longest_sequence(int arr[], int n)
{
    sort_arr(arr, n);
    int last_smaller = INT8_MIN;
    int longest = 1;
    int count_current = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]-1 == last_smaller){
            last_smaller = arr[i];
            longest += 1;
            count_current += 1;
        }
        else if(arr[i]-1 != last_smaller){
            last_smaller = arr[i];
            count_current = 1;
        }
    }
    longest = max(longest,count_current);
    return longest;
}

int main()
{
    int n;
    cout << "enter the number of elements in array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"the answer is: "<<longest_sequence(arr, n);
}