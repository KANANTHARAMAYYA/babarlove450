def cntcoins(s,total,n):
    if(total == 6):
        print(total,-s[n], total-s[n])
    if(total < 0):
        return 0
    if(n < 0):
        return 0
    if(total == 0):
        return 1

    return cntcoins(s,total-s[n],n-1) + cntcoins(s,total,n-1)
    
s = [2,3,4]
n = len(s)
total = 10

print(cntcoins(s,total,n-1))