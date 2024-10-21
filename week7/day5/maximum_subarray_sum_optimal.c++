#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the numbers"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int maxi = INT8_MIN;
    int sum = arr[0];
    for(int i = 1 ; i < n ; i++){
        sum = sum + arr[i];
        if(sum < 0){
            sum = 0;
        }
        if(sum > maxi){
            maxi = sum;
        }
    }
    cout<<"answer is "<<maxi<<endl;
}