# remove duplicate form list
# initiate a list
text = ['a', 'b', 'a', 'c', 'c']
res = []
for i in text:
    if i not in res:
        res.append(i)
print(res)
