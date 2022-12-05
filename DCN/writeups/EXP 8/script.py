n=int(input("Enter number of vertices: "))

arr=[]

for i in range(n):
    temp=list(map(int,input().split()))
    arr.append(temp)

print(arr)