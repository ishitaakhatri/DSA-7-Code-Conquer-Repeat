#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int mini = arr[0];
    int profit = 0;
    int cost;
    for(int i = 1 ; i < n ; i++){
        int cost = arr[i] - mini;
        profit = max(cost , profit);
        mini = min(mini,arr[i]);
    }
    cout<<"the maximum profit would be "<<profit<<endl;
}