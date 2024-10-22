#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    int result[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int pos = 0;
    int neg = 1;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < 0 && neg < n){
            result[neg] = arr[i];
            neg = neg + 2;
        }
        else{
            if(pos < n){
                result[pos] = arr[i];
                pos = pos + 2;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout<<result[i]<<" ";
    }
}