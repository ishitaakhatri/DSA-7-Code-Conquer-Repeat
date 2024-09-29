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
    int XOR = 0;
    for(int i = 0 ; i < n ; i++){
        XOR = XOR^arr[i];
    }
    cout<<XOR;
}