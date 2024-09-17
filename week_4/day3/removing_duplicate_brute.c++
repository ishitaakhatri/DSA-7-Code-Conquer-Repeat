#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    set<int> st;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it : st){
        arr[index] = it;
        index++;
    }
    cout<<index;

}