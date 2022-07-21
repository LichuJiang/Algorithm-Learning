#include<bits/stdc++.h>
using namespace std;
class Solution1 {
public:
    string reverseStr(string s, int k) {
        int count=0;
        int i=0;
        if(s.size()==1)return s;
        for(int i=0;i<s.size();i+=(2*k)){
            if(i+k<=s.size()){
                reverse(s.begin()+i,s.begin()+i+k);
                continue;
            }
            reverse(s.begin()+i,s.begin()+s.size());
        }
        return s;
    }
};

//my previous silly solution
class Solution2 {
public:
    string reverseStr(string s, int k) {
        int count=0;
        int i=0;
        if(s.size()==1){
            return s;
        }
        while(i+k<s.size()){
            //cout<<count<<endl;
            //cout<<i<<endl;
            if(count%2==0&&i+k<s.size()){
                reverse(s.begin()+i,s.begin()+i+k);
            }
            count++;
            i+=k;
            //cout<<s<<endl;
        }
        if(count%2==0)
            reverse(s.begin()+i,s.begin()+s.size());
        return s;
    }
};