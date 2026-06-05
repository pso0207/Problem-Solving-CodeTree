n = int(input())
points = [tuple(map(int, input().split())) for _ in range(n)]
x, y = zip(*points)
x, y = list(x), list(y)

# Please write your code here.

from collections import Counter

cnt = 0

while x:
    num_x, count_x = Counter(x).most_common(1)[0]
    num_y, count_y = Counter(y).most_common(1)[0]

    a = []

    if count_x > count_y:
        for i in range(len(x)):
            if x[i] == num_x:
                a.append(i)
        for i in sorted(a, reverse=True):
            del x[i]
            del y[i]

    else:
        for i in range(len(y)):
            if y[i] == num_y:
                a.append(i)
        for i in sorted(a, reverse=True):
            del x[i]
            del y[i]
    cnt += 1

if cnt <= 3:
    print(1)
else :
    print(0)









    
