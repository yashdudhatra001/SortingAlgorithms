def sort(n):
    for i in range(len(n)-1):
        minnum=i
        for j in range(i,len(n)):
            if n[j]<n[minnum]:
                minnum=j
        t=n[i]
        n[i]=[minnum]
        n[minnum]=t
    

num=[1,5,6,3,8,8,10]
sort(num)
print(num)
