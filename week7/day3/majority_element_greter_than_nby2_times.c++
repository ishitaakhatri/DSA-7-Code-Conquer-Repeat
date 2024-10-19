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

    int hash_arr_size = 100000;
    int hash[hash_arr_size] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    // int number; 
    // cout<<"enter the number";
    // cin>>number;
    int num_half = n / 2;
    for (int i = 0; i < hash_arr_size; i++)
    {
        if (hash[i] >= num_half)
        {
            cout <<"answer is "<< arr[i]<<endl;
        }
    }
}