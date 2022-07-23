#include<bits/stdc++.h>
#include<set>
using namespace std;
class Solution {
public:
    vector<int> movedata(vector<int>locations,vector<int>movedFrom,vector<int>movedTo){
        set<int> data;
        for(int num:locations){
            data.insert(num);
        }
        for(int i=0;i<movedFrom.size();i++){
            data.erase(movedFrom[i]);
            data.insert(movedTo[i]);
        }
        vector<int>res;
        res.assign(data.begin(),data.end());
        return res;
    }
};
int main(){
    Solution s;
    vector<int> locations{1,7,6,8};
    vector<int> movedFrom={1,7,2};
    vector<int> movedTo={2,9,5};
    vector<int> res=s.movedata(locations,movedFrom,movedTo);
    for(auto num:res){
        cout<<num<<" ";
    }
}