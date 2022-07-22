def minimumHealth(damage, armor):
    deserve=max(damage)
    res=sum(damage)-deserve+1
    if armor>=deserve:
        return res
    else:
        return res+(deserve-armor)

damage=[2,7,4,3]
armor=4
print(minimumHealth(damage,armor))

damage=[2,5,3,4]
armor=7
print(minimumHealth(damage,armor))

damage=[3,3,3]
armor=0
print(minimumHealth(damage,armor))