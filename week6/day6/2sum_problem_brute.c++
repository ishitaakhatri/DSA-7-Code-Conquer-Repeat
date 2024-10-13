#include<iostream>
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
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if((arr[i] + arr[j]) == target){
                cout<<i<<" "<<j;
            }
        }
    }
}