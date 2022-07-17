from collections import Counter
class Solution:
    def numberOfPairs(self, nums):
        mp=Counter(nums)
        #print(mp)
        pair=0
        leftover=0
        for key in mp.keys():
            while mp[key]>=2:
                mp[key]-=2
                pair+=1
            leftover+=mp[key]
        return [pair,leftover]
