def GCD(x,y):
    if x>y:
        while y:
            x , y =y , x%y
        return x
    else:
        while x:
            y , x =x , y%x
        return y

x=int(input("Enter the first number: "))
y=int(input("Enter the second number: "))

print("The GCD of",x,"and",y,"is",GCD(x,y))