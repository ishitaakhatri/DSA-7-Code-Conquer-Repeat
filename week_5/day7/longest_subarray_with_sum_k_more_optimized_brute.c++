#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int length = 0;
    int target_sum;
    cout << "enter the value of k" << endl;
    cin >> target_sum;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum+arr[j];
            if (sum == target_sum)
            {
                length = max(length, (j - i + 1));
            }
        }
    }
    cout << length;
}