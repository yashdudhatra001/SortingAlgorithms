def sort(n):
    for i in range(len(n)-1,0,-1):
        for j in range(i):
            if n[j]>n[j+1]:
                t=n[j]
                n[j]=n[j+1]
                n[j+1]=t

num=[5,8,2,6,3,4,5,4,3,8]
sort(num)
print(num)
