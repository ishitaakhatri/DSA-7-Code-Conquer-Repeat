#include<iostream>
#include<set>
#include<vector>
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
    set<vector<int>> st;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            for(int k = j+1 ; k < n ; k++){
                for(int l = k+1 ; l < n ; l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l] == 0){
                        vector<int> temp = {arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
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