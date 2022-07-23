def move_data(locations,movedFrom,movedTo):
    if len(locations)==0:
        return []
    data=set(locations)
    for i in range(len(movedFrom)):
        data.remove(movedFrom[i])
        data.add(movedTo[i])
    return sorted(list(data))

locations=[1,7,6,8]
movedFrom=[1,7,2]
movedTo=[2,9,5]
print(move_data(locations,movedFrom,movedTo))

locations=[]
movedFrom=[1,7,2]
movedTo=[2,9,5]
print(move_data(locations,movedFrom,movedTo))

locations=[1,7,6,8]
movedFrom=[]
movedTo=[]
print(move_data(locations,movedFrom,movedTo))