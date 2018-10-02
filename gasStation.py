n,x = map(int,input().split())
p = list(map(int,input().split()))
i=0
while(x>0 and i< n): 
    x=x-p[i]
    i+=1
    if x<=0:
        break
print(i)
