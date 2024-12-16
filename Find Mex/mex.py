n = int(input())
a = list(map(int,input().split()))
count = 0
i = 0
while i < n:
    if a[i] > count:
        print(count, end=" ")
    else:
        c = 0
        for j in range(i+1):
            if a[j] == count:
                c=1
                break
        if c == 1:
            count = count + 1
            i = i - 1
        else:
            print(count, end=" ")
    i = i + 1