#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int count = 0;
    int target;
    cout<<"enter the value of k"<<endl;
    cin>>target;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            int XOR = 0;
            for(int k = i ; k < j ; k++){
                XOR = XOR ^ arr[k];
                if(XOR == target){
                    count++;
                }
            }
        }
    }
    cout<<"the length of the longest subarray is "<<count<<endl;
}