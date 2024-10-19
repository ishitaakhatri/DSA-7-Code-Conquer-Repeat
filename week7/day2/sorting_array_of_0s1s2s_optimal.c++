#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int low = 0;
    int mid = 0;
    int high = n-1;
    for(int i = 0 ; i < n ; i++){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    cout<<"the sorted array would be"<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}