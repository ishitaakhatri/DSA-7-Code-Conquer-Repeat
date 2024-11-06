#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements in array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "enter the element" << endl;
    cin >> target;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == target)
            {
                count++;
            }
        }
    }
    cout << "the answer would be " << count;
}