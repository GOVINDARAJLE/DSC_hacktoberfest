# cook your dish here
for _ in range(int(input())):
    a=input()
    maxi=0
    counter=0
    for i in range(len(a)):
        if a[i]=='(':
            counter+=1
        elif a[i]==')':
            counter-=1
        maxi=max(maxi,counter)
    print(maxi*'(' + maxi*')')
