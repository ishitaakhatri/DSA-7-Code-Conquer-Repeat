#include<iostream>
#include<vector>
using namespace std;
void majority_elements(int arr[],int n){
    vector<int> ans;
    for(int i = 0 ; i < n ; i++){
        if(ans.size() == 0 || ans[0] != arr[i]){
            int count = 0;
            for(int j = 0 ; j < n ; j++){
                if(arr[j] == arr[i]){
                    count++;
                }
                if(count > n/3){
                    ans.push_back(arr[i]);
                }
                if(ans.size() == 2) break;
            }
        } 
    }
    cout<<"the answer would be"<<endl;
    for (int num : ans) {
        cout << num << " ";
    }
}
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

}