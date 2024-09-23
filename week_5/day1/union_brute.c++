#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cout<<"enter the number of elements in array1"<<endl;
    cin>>n1;
    int arr1[n1];
    cout<<"enter the array1 elements"<<endl;
    for(int i = 0 ; i < n1 ; i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"enter the number of elements in array2"<<endl;
    cin>>n2;
    int arr2[n2];
    cout<<"enter the array2 elements"<<endl;
    for(int i = 0 ; i < n2 ; i++){
        cin>>arr2[i];
    }
    set<int> st;
    for(int i = 0 ; i < n1 ; i++){
        st.insert(arr1[i]);
    }
    for(int i = 0 ; i < n2 ; i++){
        st.insert(arr2[i]);
    }
    int arr_union[st.size()];
    int num = 0;
    for(auto it : st){
        arr_union[num++]=it;
    }
    for(int i = 0 ; i < st.size() ; i++){
        cout<<arr_union[i]<<" ";
    }

}