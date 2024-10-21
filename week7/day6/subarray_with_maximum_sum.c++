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
    int start;
    int arrstart = -1;
    int arrend = -1;
    int maxi = INT8_MIN;
    int sum = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(sum==0){
            start = i;
        }
        sum = sum + arr[i];
        if(sum < 0){
            sum = 0;
        }
        if(sum > maxi){
            maxi = sum;
            arrstart = start;
            arrend = i;
        }
    }
    cout<<"subarray would be"<<endl;
    for(int i = arrstart ; i < arrend ; i++){
        cout<<arr[i]<<" ";
    }
}