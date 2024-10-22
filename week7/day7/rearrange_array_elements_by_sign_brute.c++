#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int positive[n/2];
    int negative[n/2];
    int poscount = 0;
    int negcount = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > 0){
            positive[poscount++] = arr[i];
        }
        else{
            negative[negcount++] = arr[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        arr[2*i] = positive[i];
    }
    for(int i = 0 ; i < n ; i++){
        arr[(2*i) + 1] = negative[i];
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

}