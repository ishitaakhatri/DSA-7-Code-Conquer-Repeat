#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    int second_largest = -1;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second_largest){
            second_largest = arr[i];
        }
    }
    cout<<"the second largest element is "<<second_largest;
}