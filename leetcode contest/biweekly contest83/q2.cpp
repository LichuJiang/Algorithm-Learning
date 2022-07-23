#include<bits/stdc++.h>
using namespace std;
class SolutionConcise{
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long n=nums.size();
        vector<long long> v(n,0);
        if(nums[0]==0){
            v[0]=1;
        }
        for(int i=1;i<n;i++){
            if(nums[i]==0){
                v[i]=1+v[i-1];
            }
        }
        long long sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        return sum;
    }
};

class SolutionMy {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        vector<int> zero;
        int count0=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count0++;
                while(i+1<nums.size()&&nums[i+1]==0){
                    count0++;
                    i++;
                }
                zero.push_back(count0);
                count0=0;
            }
        }
        if(zero.size()==0)return 0;
        for(int n:zero){
            while(n>0){
                ans+=n;
                n--;
            }
        }
        // for(int n:zero){
        //     cout<<n<<endl;
        // }
        return ans;
    }
};