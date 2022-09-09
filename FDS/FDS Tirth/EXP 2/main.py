import pandas as pd

def get_median(list1):
    # sort the list
    ls_sorted = list1.sort()
    # find the median
    if len(list1) % 2 != 0:
        # total number of values are odd
        # subtract 1 since indexing starts at 0
        m = int((len(list1)+1)/2 - 1)
        return list1[m]
    else:
        m1 = int(len(list1)/2 - 1)
        m2 = int(len(list1)/2)
        return (list1[m1]+list1[m2])/2

def mode(list1):
    # dictionary to keep count of each value
    counts = {}
    # iterate through the list
    for item in list1:
        if item in counts:
            counts[item] += 1
        else:
            counts[item] = 1
    # get the keys with the max counts
    return [key for key in counts.keys() if counts[key] == max(counts.values())]


df= pd.read_csv(r'ds_salaries.csv')
df.head()
salary=df['salary']
s=0
list=df['salary'].tolist()
for i in range(0,21):
    s = salary[i]+s


mean = s/20
print(f"Mean: {mean}")
list1=[]
for i in range(0,20):
    list1.append(list[i])
    
print(f"Median: {get_median(list1)}")

print(f"Mode: {mode(list1)}")

