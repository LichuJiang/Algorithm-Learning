# 周赛303学到的技巧
学会用自定义堆排序
```python
class Node:
        def __init__(self, value,pos):
            self.value = value
            self.pos=pos

        def __lt__(self, other):
            if self.value==other.value:
                return self.pos>other.pos
            else:
                return self.value<other.value
```
堆排序的原理是根据__Lt__方法比较大小的，例如在303周赛中我们可以将Node存入heap中按照node的值进行排序，如果node值相等，我们就按照pos排序。