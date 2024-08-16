#include<bits/stdc++.h>
using namespace std;
void explain_deque(){
     cout<<"from here deque starts"<<endl;
    deque<int>dq;
    dq.push_back(10);
    dq.emplace_back(20);
    dq.push_front(5);
    dq.emplace_front(100);

    dq.pop_back();
    dq.pop_front();

    dq.front();
    dq.back();
    for(auto it : dq){
        cout<<it<<" "<<endl;
    }
}

void explain_stack(){
     cout<<"from here stack starts"<<endl;
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}

void explain_queue(){
    cout<<"from here queue starts"<<endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

}

void explain_set(){
    cout<<"from here set starts"<<endl;
    set<int> st;//does not allow duplicates and have the element sin the sorted order
    st.insert(20);
    st.insert(20);
    st.insert(50);
    st.insert(50);
    st.emplace(60);


    // auto it = st.find(20);
    // auto it = st.find(60);

}

void explain_multiset() {
    cout<<"from here multiset starts"<<endl;
    multiset<int> ms;//here duplicate values are allowed 
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);//all 1s are erased

}

void explain_map() {
    cout<<"from here map starts"<<endl;
    map<int,int> mpp;
    mpp[1] = 2;
    mpp.insert({3,5});
    mpp[2] = 9;

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1]<<endl;

}

int main()
{
    list<int> ls;
    ls.push_back(10);
    ls.emplace_back(20);
    ls.push_front(5);
    ls.emplace_front(100);
    explain_deque();
    explain_stack();
    explain_queue();
    explain_set();
    explain_multiset();
    explain_map();
}



