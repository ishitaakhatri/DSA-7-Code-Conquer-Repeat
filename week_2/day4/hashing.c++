#include<iostream>
using namespace std;
int main()
{
    // initializing the array
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    // precompute 
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    // inputing the query

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch 

        cout<<hash[number]<<endl;
    }


}


