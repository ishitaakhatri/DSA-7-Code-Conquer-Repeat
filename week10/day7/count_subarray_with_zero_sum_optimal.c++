#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the value of target"<<endl;
    cin>>k;
    int xr = 0;
    int count = 0;
    map<int,int> mpp;
    mpp[xr]++; //(0,1)
    for(int i = 0 ; i < n ; i++){
        xr = xr ^ arr[i];
        int x = xr ^ k;
        count += mpp[x];
        mpp[xr]++;
    }
    cout<<"the number of subarray are:- "<<count<<endl;

}