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
    int hash[n+1] = {0};
    for(int i = 0 ; i < n ; i++){
        hash[arr[i]] = 1;
    }
    for(int i = 1 ; i < n ; i++){
        if(hash[i] == 0){
            cout<<i;
        }
    }
}