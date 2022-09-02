import pandas as pd

df= pd.read_csv("data.csv")
follower_list=df["followers"].tolist()
sum=0
for i in follower_list:
    sum=sum+i
mean=sum/len(follower_list)
print(f"Mean- {mean}")

follower_list.sort()
if(len(follower_list)%2==0):
    median=(follower_list[len(follower_list)/2]+follower_list[len(follower_list)/2-1])/2
else:
    median=follower_list[len(follower_list)//2]
print(f"Median- {median}")

frequency={}
follower_list=[1,2,3,4,5,2,3,4,5,2,1]
for i in follower_list:
    if i in frequency:
        frequency[i]=frequency[i]+1
    else:
        frequency[i]=1
m=0
for i in frequency:
    if(frequency[i]>m):
        m=frequency[i]
        element=i

print(f"Mode- {element}")

varian
