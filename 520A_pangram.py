n=int(input ())
s=str(input())
temp=set(s.lower())-set(' ')

if len(temp)==26:
    print("YES")
else:
    print("NO")
