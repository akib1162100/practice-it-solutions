def isPerfectNumber(num):
    aliquotSum = 0   ##  The sum of divisors of a number, excluding the number itself, is called its aliquot sum
    for i in range(1,(num//2)+1): 
        if not num%i:
            aliquotSum += i
    
    if aliquotSum==num:
        return True

    return False



num = int(input("Enter a number: "))
if isPerfectNumber(num):
    print(str(num)+" is a perfect number")
else:
    print(str(num)+" is not a perfect number")
