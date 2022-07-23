#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        if(count(suits.begin(),suits.end(),suits[0])==5){
            return "Flush";
        }
        unordered_map<int,int> mp;
        for(int i=0;i<ranks.size();i++){
            mp[ranks[i]]++;
        }
        int flag=0;
        for(auto it:mp){
            //cout<<it.first<<" "<<it.second<<endl;
            flag=max(flag,it.second);
        }
        if(flag>=3)return "Three of a Kind";
        if(flag==2)return "Pair";
        return "High Card";
    }
};