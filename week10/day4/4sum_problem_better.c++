#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    set<vector<long long>> st;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            set<long long> hashset;
            for(int k = j+1 ; k < n ; k++){
                long long fourth = -(arr[i]+arr[j]+arr[k]);
                if(hashset.find(fourth) != hashset.end()){
                    vector<long long> temp = {arr[i],arr[j],arr[k],(fourth)};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(arr[k]);
            }
        }
    }
    for (auto triplet : st)
    {
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout<<endl;
    }
}