x=int(input('enter limit: '))
for n in range(1,x+1):
    if(n>0):
        for i in range(2,n):
            if((n%i)==0):
                break
        else:
            print(n)