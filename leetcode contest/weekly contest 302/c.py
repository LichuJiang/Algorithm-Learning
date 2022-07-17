import heapq
class Node:
        def __init__(self, value,pos):
            self.value = value
            self.pos=pos

        def __lt__(self, other):
            if self.value==other.value:
                return self.pos>other.pos
            else:
                return self.value<other.value
class Solution:   
    def smallestTrimmedNumbers(self, nums, queries):
        res=[]
        for query in queries:
            last_digit=query[1]
            heapsize=query[0]
            temp=[]
            for num in nums:
                temp.append(num[-last_digit:])
            #print(temp)
            hp=[]
            for i in range(len(temp)):
                cur=Node(-int(temp[i]),i)
                heapq.heappush(hp,cur)
                if len(hp)>heapsize:
                    heapq.heappop(hp)
            index=heapq.heappop(hp).pos
            res.append(index)
        return res