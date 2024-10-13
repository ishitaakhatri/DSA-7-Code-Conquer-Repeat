#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target element"<<endl;
    cin>>target;
    map<int,int> mpp;
    for(int i = 0 ; i < n ; i++){
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            cout<<mpp[more]<<" "<<i;
        }
        mpp[a] = i;
    }
}