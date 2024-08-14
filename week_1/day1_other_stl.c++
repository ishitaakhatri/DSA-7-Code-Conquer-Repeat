#include<bits/stdc++.h>
using namespace std;
void explain_deque(){
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

int main()
{
    list<int> ls;
    ls.push_back(10);
    ls.emplace_back(20);
    ls.push_front(5);
    ls.emplace_front(100);
    explain_deque();
    explain_stack();
}



