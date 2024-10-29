#include <iostream>
#include <vector>
using namespace std;
bool linear_search(int arr[], int num , int n){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;
}
void longest_sequence(int arr[] , int n){
    int longest = 1;
    int x;
    int count;
    for(int i = 0 ; i < n ; i++){
        x = arr[i];
        count = 1;
        while(linear_search(arr,x+1,n) == true){
            x = x+1;
            count = count + 1;
        }
        longest = max(longest, count);
    }
    cout << "The length of the longest consecutive sequence is: " << longest << endl;
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
    longest_sequence(arr,n);
}