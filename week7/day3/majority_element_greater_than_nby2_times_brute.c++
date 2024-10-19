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
    for(int i = 0 ; i < n ; i++){
        int count = 0;
        for(int j = 0 ; j < n ; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count > (n/2)){
            cout<<"answer is "<<arr[i]<<endl;
            break;
        }
    }
}