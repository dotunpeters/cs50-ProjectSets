import math
import os
newList = [5,3,7,6,91.45,2,1,14,6,2.0003, 5, -13.55, 6]
max = newList[0]
for i in newList:
    if i > max:
        max = i
    else:
        continue
print(round(max))

x = 32.45

x = math.fsum(newList)
print(x)

listTuples = [(1,2,3),(4,5,6),(7,8,9)]
for i in listTuples:
    print(i)
print(os.name)
#newList.sort()
#big = newList[-1]
#print(big)