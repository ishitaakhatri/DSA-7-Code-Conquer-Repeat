#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i = 0 ; i < n ; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        if(it.second == 1){
            cout<<it.first;
        }
    }
}