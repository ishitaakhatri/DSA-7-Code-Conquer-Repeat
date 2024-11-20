#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int sum = 0;
    int maxi = 0;
    map<int,int> mpp;
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
        if(sum == 0){
            maxi = i+1;
        }
        else{
            if(mpp.find(sum) != mpp.end()){
                int index = mpp[sum];
                maxi = max(maxi,(i-index));
            }
            else{
                mpp[sum] = i;
            }
        }
    }
     cout << "Length of the longest subarray with zero sum is: " << maxi << endl;
}