#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
void sort_arr(int arr[],int n){
    for(int i = 0 ; i <= n-1 ; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"please enter the target"<<endl;
    cin>>target;
    sort_arr(arr,n);
    set<vector<int>> st;
    for(int i = 0 ; i < n ; i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        for(int j = i+1 ; j < n ; j++){
            if(j != i+1 && arr[j]==arr[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while(k < l){
                int sum = arr[i]+arr[j]+arr[k]+arr[l];
                if(sum == target){
                    vector<int> temp = {arr[i],arr[j],arr[k],arr[l]};
                    st.insert(temp);
                    k++;
                    l--;
                    while(k<l && arr[k] == arr[k-1]) k++;
                    while(k<l && arr[l] == arr[l+1]) l--;
                }
                else if(sum<target) k++;
                else l--;
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