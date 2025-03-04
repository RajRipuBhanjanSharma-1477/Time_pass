#this code return the largest palondrom in the given string
def fun(s):
    if (len(s)==1):
        # print(s)
        return s
    elif (s==s[::-1]):
        # print(s)
        return s
    else:
        # print(s)
        return fun(s[:-1])
def fun1(s):
    ans=""
    k=s
    while(len(k)>1):
        # print(k)
        t=fun(k)
        if len(t)>len(ans):
            ans=t
        k=k[1:]
    # print(ans)
    return ans
print(fun1(input()))
        
