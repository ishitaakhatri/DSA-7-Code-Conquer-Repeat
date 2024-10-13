#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the value of k"<<endl;
    cin>>k;
    int left = 0;
    int right = 0;
    long long sum = arr[0];
    int max_len = 0;
    while(right < n){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            max_len = max(max_len,right - left + 1);
        }
        right++;
        if(right < n) sum = sum + arr[right];
    }
    cout<<max_len;
}