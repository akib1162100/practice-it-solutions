def GDC(x,y):
    if(y>x):
        return GDC(y,x)
    
    if x%y==0:
        return y
    else:
        return GDC(y,x%y)
    

def LCM(x,y):
    return (x*y)//GDC(x,y)


x=int(input("Enter the first number: "))
y=int(input("Enter the second number: "))

print("The LCM of",x,"and",y,"is",LCM(x,y))