#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements in array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "enter the value of k"<<endl;
    cin >> k;
    map<long long, int> preSumMap;
    long long sum = 0;
    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum == k)
        {
            max_len = max(max_len, i + 1);
        }
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            max_len = max(max_len,len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }; 
    }
    cout<<max_len;
}