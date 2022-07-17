class Solution:
    def maximumSum(self, nums):
        dsum=[]
        for num in nums:
            temp=0
            while num!=0:
                cur=num%10
                temp+=cur
                num=(num-cur)//10
            dsum.append(temp)
        #print(dsum)
        hm={}#key dsum : value nums[i]
        res=-1
        for i in range(len(nums)):
            if dsum[i] in hm:
                res=max(res,nums[i]+hm[dsum[i]])
                hm[dsum[i]]=max(nums[i],hm[dsum[i]])
            else:
                hm[dsum[i]]=nums[i]
        #print(hm)
        return res