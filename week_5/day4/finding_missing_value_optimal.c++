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
    int sum = ((n+1)*(n+2))/2;
    int sum2=0;
    for(int i = 0 ; i < n ; i++){
        sum2 = sum2 + arr[i];
    }
    int answer = sum - sum2;
    cout<<answer;
}