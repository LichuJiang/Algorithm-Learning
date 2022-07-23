#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> st;
        for(auto c : s){
            if(!st.empty()&&c==st.top()){
                st.pop();
                continue;
            }
            st.push(c);
        }
        string res;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.begin()+res.size());
        return res;
    }
};