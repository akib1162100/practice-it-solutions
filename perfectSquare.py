def isPerfrectSquare1(num):
    num1 = num 
    for i in range(1,num,2):
        num1  = num1 - i
        if(num1==0):
            return True
        if(num1<0):
            break
    return False

num = int(input("Enter a number: "))
if not isPerfrectSquare1(num):
    print(str(num)+" is not a perfect square")
else:
    print(str(num)+" is a perfect square")
